/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
long long arr[1000005];
long long brr[1000005];
void Init(long long arr[],long long n)
{
    for(long long i=0; i<n; i++) cin>>arr[i];
}
void Handle(long long n,long long m)
{
    sort(arr,arr+n);
    sort(brr,brr+m);
    cout<<arr[n-1]*brr[0];
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,m;
        cin>>n>>m;
        Init(arr,n);
        Init(brr,m);
        Handle(n,m);
        cout<<endl;
    }
    return 0;
}
