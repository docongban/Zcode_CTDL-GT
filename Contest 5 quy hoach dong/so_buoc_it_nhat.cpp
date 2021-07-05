/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int arr[1000];
int tam[1000];
void Init(int n)
{
    for(int i=0;i<n;i++) cin>>arr[i];
}
void Handle(int n)
{
    for(int i=0;i<n;i++) tam[i]=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++) 
        {
            if(arr[j]<=arr[i]) tam[i]=max(tam[i],tam[j]+1);
        }
    }
    int Max=tam[0];
    for(int i=0;i<n;i++)
    {
        if(Max<tam[i]) Max=tam[i];
    }
    cout<<n-Max;
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
        Handle(n);
        cout<<endl;
    }
    return 0;
}
