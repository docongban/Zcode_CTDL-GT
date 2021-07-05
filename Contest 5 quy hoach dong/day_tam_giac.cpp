/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int arr[100000];
int tang[100000],giam[100000];
void Init(int n)
{
    for(int i=0;i<n;i++) 
    {
        cin>>arr[i];
    }
}
void Handle(int n)
{
    tang[0]=1;
    giam[n-1]=1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[i-1]) tang[i]=tang[i-1]+1;
        else tang[i]=1;
    }
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]>arr[i+1]) giam[i]=giam[i+1]+1;
        else giam[i]=1;
    }
    int dem=tang[0]+giam[0]-1;
    for(int i=1;i<n;i++) 
    {
        if(dem<(tang[i]+giam[i]-1)) dem=tang[i]+giam[i]-1;
    }
    cout<<dem;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Init(n);
        Handle(n);
        cout<<endl;
    }
    return 0;
}
