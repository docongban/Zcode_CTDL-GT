/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
long long arr[1000005];
void Sang_prime()
{
    for(long long i=2;i<=1000000;i++) arr[i]=1;
    for(long long i=2;i<=1000000;i++)
    {
        if(arr[i]==1)
        {
            for(long long j=i*i;j<=1000000;j+=i) arr[j]=0;
        }
    }
}
void Handle(int n)
{
    Sang_prime();
    int check=0;
    for(int i=2;i<=n;i++)
    {
        if(arr[i]==1&&arr[n-i]==1)
        {
            cout<<i<<" "<<n-i;
            check=1;
            break;
        }
    }
    if(check==0) cout<<-1;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Handle(n);
        cout<<endl;
    }
    return 0;
}
