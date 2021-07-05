/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int arr[1005];
void Init(int n)
{
    for(int i=0;i<n;i++) cin>>arr[i];
}
void Handle(int n,int k)
{
    int dem=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==k) dem++;
        }
    }
    cout<<dem;
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
