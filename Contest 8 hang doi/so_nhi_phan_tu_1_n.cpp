/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
long long tmp[100005];
long long Nhi_phan(int n) 
{
    vector<long long >v;
    while(n>0)
    {
        v.push_back(n%2);
        n/=2;
    }
    long long kq=0;
    for(long long i=v.size()-1;i>=0;i--)
    {
        kq=kq*10+v[i];
    }
    return kq;
}
void Handle(int n)
{
    tmp[0]=0,tmp[1]=1;
    for(int i=2;i<=100000;i++) tmp[i]=Nhi_phan(i);
    for(int i=1;i<=n;i++) cout<<tmp[i]<<" ";
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
