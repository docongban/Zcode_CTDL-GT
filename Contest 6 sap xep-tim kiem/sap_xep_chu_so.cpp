/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
long long arr[1000005];
long long tmp[1000005];
void Init(long long n)
{
    for(long long i=0;i<n;i++) cin>>arr[i];
}
void Delete(long long arr[],long long &n,long long x)
{
    for(long long i=x+1;i<n;i++) 
    {
        arr[i-1]=arr[i];
    }
    n--;
}
void Delete_sample(long long arr[],long long n)
{
    for(long long i=0;i<n;i++) 
    {
        for(long long j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                Delete(arr,n,j);
                j--;
            }
        }
    }
    for(long long i=0;i<n;i++) cout<<arr[i]<<" "; 
}
void Handle(long long n)
{
    long long x=0;
    for(long long i=0;i<n;i++)
    {
        while(arr[i]>0)
        {
            tmp[x++]=arr[i]%10;
            arr[i]/=10;
        }
    }
    sort(tmp,tmp+x);
    Delete_sample(tmp,x);
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
