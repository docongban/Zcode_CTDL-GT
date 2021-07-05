/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
long long arr[1000005];
void Init(long long n)
{
    for(long long i=0; i<n; i++) cin>>arr[i];
}
void Handle(long long n,long long k)
{
    int check=0;
    for(long long i=0; i<n; i++)
    {
        if(arr[i]==k) check=1;
    }
    if(check==1) cout<<1;
    else cout<<-1;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        Init(n);
        Handle(n,k);
        cout<<endl;
    }
    return 0;
}
