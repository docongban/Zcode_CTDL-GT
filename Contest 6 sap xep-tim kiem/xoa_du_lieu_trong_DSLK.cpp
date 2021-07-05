/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int arr[100000];
void Init(int n)
{
    for(int i=0;i<n;i++) cin>>arr[i];
}
void Handle(int n,int x)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x) count++;
        else arr[i-count]=arr[i];
    }
    n-=count;
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}
int main()
{
    int n,x;
    cin>>n;
    Init(n);
    cin>>x;
    Handle(n,x);
    return 0;
}
