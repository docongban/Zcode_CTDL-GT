/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int arr[1000];
void Init(int n)
{
    for(int i=0;i<n;i++) cin>>arr[i];
}
void Handle(int n,int k)
{
    long long tmp[1000]={0};
    tmp[0]=1;
    for(int i=1;i<=k;i++) 
    {
        for(int j=0;j<n;j++) 
        {
            if(i>=arr[j]) tmp[i]=(tmp[i]+tmp[i-arr[j]])%1000000007;
        }
    }
    cout<<tmp[k];
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
