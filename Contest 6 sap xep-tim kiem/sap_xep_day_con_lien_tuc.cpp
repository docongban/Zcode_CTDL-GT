/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
long long arr[1000005];
long long brr[1000005];
void Init(long long n)
{
    for(long long i=1; i<=n; i++)
    {
        cin>>arr[i];
        brr[i]=arr[i];
    }
}
void Handle(long long n)
{
    sort(brr,brr+n+1);
    long long x=0,y=0;
    for(long long i=1; i<=n; i++)
    {
        if(arr[i]!=brr[i]) 
        {
            x=i;
            break;
        }
    }
    for(long long i=n; i>=1; i--)
    {
        if(arr[i]!=brr[i]) 
        {
            y=i;
            break;
        }
    }
    cout<<x<<" "<<y;
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
