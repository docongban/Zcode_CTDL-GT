/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int arr[1005];
void Init(int n)
{
    for(int i=0; i<n; i++) cin>>arr[i];
}
void Delete(int arr[],int &n,int x)
{
    for(int i=x+1;i<n;i++)
    {
        arr[i-1]=arr[i];
    }
    n--;
}
void Handle(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++) 
        {
            if(arr[i]==arr[j]) 
            {
                Delete(arr,n,j);
                j--;
            }
        }
    }
    sort(arr,arr+n);
    int dem=0;
    for(int i=arr[0];i<=arr[n-1];i++) dem++;
    cout<<dem-n;
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
