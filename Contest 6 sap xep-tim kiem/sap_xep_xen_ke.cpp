/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int arr[105];
void Init(int n)
{
    for(int i=0;i<n;i++) cin>>arr[i];
}
void Xu_li(int n)
{
    sort(arr,arr+n);
    if(n%2==0)
    {
        for(int i=0;i<n/2;i++) cout<<arr[n-i-1]<<" "<<arr[i]<<" ";
    }
    else
    {
        for(int i=0;i<n/2;i++) cout<<arr[n-i-1]<<" "<<arr[i]<<" ";
        cout<<arr[n/2];
    }
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
        Xu_li(n);
        cout<<endl;
    }
    return 0;
}
