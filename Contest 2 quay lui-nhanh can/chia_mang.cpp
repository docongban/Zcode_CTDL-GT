/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int arr[100];
void Init(int n)
{
    for(int i=0;i<n;i++) cin>>arr[i];
}
void Handle(int n,int k)
{
    int tong=0;
    for(int i=0;i<n;i++) tong+=arr[i];
    if(tong%k==0) cout<<1;
    else cout<<0;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        Init(n);
        Handle(n,k);
        cout<<endl;
    }
    return 0;
}
