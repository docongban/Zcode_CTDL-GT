/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
long long fi[100];
void Fibonacci()
{
    fi[1]=fi[2]=1;
    for(int i=3;i<=93;i++)
    {
        fi[i]=fi[i-2]+fi[i-1];
    }
}
void Handle(long long n,long long k)
{
    while(n>2)
    {
        if(k<=fi[n-2]) n-=2;
        else
        {
            k-=fi[n-2];
            n--;
        }
    }
    if(n==1) cout<<"A";
    else cout<<"B";
}
int main()
{
    int t;
    cin>>t;
    Fibonacci();
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        Handle(n,k);
        cout<<endl;
    }
    return 0;
}
