/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
vector<long long> v;
void Vt_trung_tam(long long n)
{
    int vt=0;
    long long mu=1;
    while(n/2>0)
    {
        vt++;
        if(vt==1) 
        {
            v.push_back(2);
            mu=2;
        }
        else
        {
            mu*=2;
            v.push_back(mu);
        }
        n/=2;
    }
}
long long Bit(long long vt,long long n,long long tt)
{
    if(vt%2==1) return 1;
    if(vt<v[tt]) Bit(vt,n/2,tt-1);
    else if(vt==v[tt]) return n%2;
    else if(vt>v[tt]) Bit(2*v[tt]-vt,n/2,tt-1);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,l,r,dem=0;
        cin>>n>>l>>r;
        v.clear();
        Vt_trung_tam(n);
        for(long long i=l;i<=r;i++)
        {
            dem+=Bit(i,n,v.size()-1);
        }
        cout<<dem;
        cout<<endl;
    }
    return 0;
}
