/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int arr[1005];
void Init(int n)
{
    for(int i=0;i<n;i++) cin>>arr[i];
}
void Sort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j]) swap(arr[i],arr[j]);
        }
    }
}
void Handle(int n,int k)
{
    Sort(arr,n);
    for(int i=0;i<k;i++) cout<<arr[i]<<" ";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        Init(n);
        Handle(n,k);
        cout<<endl;
    }
    return 0;
}
