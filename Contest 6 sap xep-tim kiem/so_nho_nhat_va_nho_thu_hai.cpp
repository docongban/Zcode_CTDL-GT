/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
long long arr[1000005];
void Init(long long n)
{
    for(long long i=0;i<n;i++) cin>>arr[i];
}
void Handle(long long n)
{
    long long Min1=arr[0];
    for(long long i=0;i<n;i++)
    {
        if(Min1>arr[i]) Min1=arr[i];
    }
    long long Min2=arr[0];
    for(long long i=0;i<n;i++)
    {
        if(Min2>arr[i]&&Min1<arr[i]) Min2=arr[i];
    }
    if(Min2==Min1) cout<<-1;
    else cout<<Min1<<" "<<Min2;
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
