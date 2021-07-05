/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
long long arr[100000];
long long chan[100000];
long long le[100000];
void Init(long long n)
{
    for(long long i=0;i<n;i++) cin>>arr[i];
}
void Handle(long long n)
{
    long long x1=0,x2=0;
    for(long long i=0;i<n;i++)
    {
        if(i%2==0) chan[x1++]=arr[i];
        else le[x2++]=arr[i];
    }
    sort(chan,chan+x1);
    sort(le,le+x2,greater<int>());
    if(x1>x2) 
    {
        for(long long i=0;i<x2;i++) cout<<chan[i]<<" "<<le[i]<<" ";
        cout<<chan[x1-1];
    }
    else 
    {
        for(long long i=0;i<x2;i++) cout<<chan[i]<<" "<<le[i]<<" ";
    }
}
int main()
{
    long long n;
    cin>>n;
    Init(n);
    Handle(n);
    return 0;
}
