/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int arr[10000];
void Init(int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}
void Handle(int n)
{
    sort(arr,arr+n);
    long long tich=1;
    if(arr[n-1]<=0) tich=arr[0]*arr[1];
    else if(arr[n-3]>0)
    {
        if(arr[0]*arr[1]<arr[n-3]*arr[n-2]) tich=arr[n-3]*arr[n-2]*arr[n-1];
        else tich=arr[0]*arr[1]*arr[n-1];
    }
    else if(arr[n-2]>0&&arr[n-3]<=0)
    {
        if(arr[0]*arr[1]<arr[n-2]) tich=arr[n-2]*arr[n-3];
        else tich=arr[0]*arr[1]*arr[n-1];
    }
    else if(arr[n-1]>0&&arr[n-2]<=0) tich=arr[0]*arr[1]*arr[n-1];
    cout<<tich;
}
int main()
{
    int n;
    cin>>n;
    Init(n);
    Handle(n);
    return 0;
}
