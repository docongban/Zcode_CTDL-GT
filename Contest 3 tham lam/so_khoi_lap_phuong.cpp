/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int arr[20];
long long Max;
vector<long long> v;
bool Check(long long n)
{
    long long x=1;
    for(long long i=1;i<=100000;i++)
    {
        if(x==i*i*i) return true;
    }
    return false;
}
void Sinh(int n,int i)
{
    for(int j=0;j<=1;j++)
    {
        arr[i]=j;
        if(i==n-1)
        {
            long long tmp=0;
            for(long long k=0;k<n;k++)
            {
                if(arr[k]==1) tmp=tmp*10+v[k];
            }
            if(Check(tmp)==true&&tmp>Max) Max=tmp;
        }
        else Sinh(n,i+1);
    }
}
void Handle(long long n)
{
    while(n>0)
    {
        v.push_back(n%10);
        n/=10;
    }
    reverse(v.begin(),v.end());
    Max=-1;
    Sinh(v.size(),0);
    cout<<Max;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        v.clear();
        Handle(n);
        cout<<endl;
    }
    return 0;
}
