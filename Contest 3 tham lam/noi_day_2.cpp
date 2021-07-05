/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
long long arr[1000005];
long long modulo=1e9+7;
void Init(long long n)
{
    for(long long i=0;i<n;i++) cin>>arr[i];
}
void Handle(long long n)
{
    priority_queue<long long,vector<long long>,greater<long long>> q;
    for(long long i=0;i<n;i++) q.push(arr[i]);
    long long kq=0;
    while(q.size()>1)
    {
        long long a=q.top(); q.pop();
        long long b=q.top(); q.pop();
        q.push((a+b)%modulo);
        kq+=(a+b)%modulo;
        kq%=modulo;
    }
    cout<<kq;
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
