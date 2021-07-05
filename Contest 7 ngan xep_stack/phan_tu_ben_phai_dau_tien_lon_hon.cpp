/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
long long arr[100000];
void Init(long long n)
{
    for(long long i=0;i<n;i++) cin>>arr[i];
}
void Handle(long long n)
{
    for(long long i=0;i<n;i++)
    {
        long long next=-1;
        for(long long j=i+1;j<n;j++)
        {
            if(arr[j]>arr[i])
            {
                next=arr[j];
                break;
            }
        }
        cout<<next<<" ";
    }
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
