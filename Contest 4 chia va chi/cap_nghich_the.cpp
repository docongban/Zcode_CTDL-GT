/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
long long arr[1000000];
long long tmp1[1000000],tmp2[1000000];
void Init(long long n)
{
    for(long long i=0;i<n;i++) cin>>arr[i];
}
long long Merge(long long l,long long r,long long m)
{
    long long L=m-l+1;
    long long R=r-m;
    for(long long i=0;i<L;i++) tmp1[i]=arr[l+i];
    for(long long i=0;i<R;i++) tmp2[i]=arr[m+i+1];
    long long i=0,j=0,k=l,kq=0;
    while(i<L&&j<R)
    {
        if(tmp1[i]<=tmp2[j]) arr[k++]=tmp1[i++];
        else
        {
            arr[k]=tmp2[j];
            j++;k++;
            kq+=L-i;
        }
    }
    while(i<L) arr[k++]=tmp1[i++];
    while(j<R) arr[k++]=tmp2[j++];
    return kq;
}
long long Handle(long long l,long long r)
{   
    long long kq=0;
    if(l<r) 
    {
        int m=(l+r)/2;
        kq+=Handle(l,m);
        kq+=Handle(m+1,r);
        kq+=Merge(l,r,m);
    }
    return kq;
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
        cout<<Handle(0,n-1)<<endl;
    }
    return 0;
}
