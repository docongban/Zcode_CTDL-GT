/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
long long arr[1000005];
void Init(long long n)
{
    for(long long i=0; i<n; i++) cin>>arr[i];
}
void Handle(long long n)
{
    sort(arr,arr+n);
    for(long long i=0; i<n; i++) cout<<arr[i]<<" ";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        Init(n);
        Handle(n);
        cout<<endl;
    }
    return 0;
}
