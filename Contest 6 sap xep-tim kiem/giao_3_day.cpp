/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
long long arr[1000000];
long long brr[1000000];
long long crr[1000000];
long long tmp[1000000];
void Init(long long arr[],long long n)
{
    for(long long i=0;i<n;i++) cin>>arr[i];
}
void Handle(long long n1,long long n2,long long n3)
{
    long long i=0,j=0,k=0,x=0;
    while(i<n1&&j<n2&&k<n3)
    {
        if(arr[i]==brr[j]&&brr[j]==crr[k])
        {
            tmp[x++]=arr[i];
            i++;j++;k++;
        }
        else if(arr[i]<brr[j]) i++;
        else if(brr[j]<crr[k]) j++;
        else k++;
    }
    if(x==0) cout<<-1;
    else
    {
        for(long long i=0;i<x;i++) cout<<tmp[i]<<" ";
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n1,n2,n3;
        cin>>n1>>n2>>n3;
        Init(arr,n1);
        Init(brr,n2);
        Init(crr,n3);
        Handle(n1,n2,n3);
        cout<<endl;
    }
    return 0;
}
