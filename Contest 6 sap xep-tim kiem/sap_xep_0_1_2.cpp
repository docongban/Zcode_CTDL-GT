/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int arr[1000005];
void Init(int n)
{
    for(int i=0; i<n; i++) cin>>arr[i];
}
void Xu_li(int n)
{
    sort(arr,arr+n);
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Init(n);
        Xu_li(n);
        cout<<endl;
    }
    return 0;
}
