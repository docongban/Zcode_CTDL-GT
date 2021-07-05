/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int arr[100];
void Handle_chan(int n,int i)
{
    for(int j=0;j<=1;j++)
    {
        arr[i]=j;
        if(i==n/2)
        {
            for(int i=1;i<=n/2;i++) cout<<arr[i]<<" ";
            for(int i=n/2;i>=1;i--) cout<<arr[i]<<" ";
            cout<<endl;
        }
        else Handle_chan(n,i+1);
    }
}
void Handle_le(int n,int i)
{
    for(int j=0;j<=1;j++)
    {
        arr[i]=j;
        if(i==n/2)
        {
            for(int i=1;i<=n/2+1;i++) cout<<arr[i]<<" ";
            for(int i=n/2;i>=1;i--) cout<<arr[i]<<" ";
            cout<<endl;
        }
        else Handle_le(n,i+1);
    }
}
int main()
{
    int n;
    cin>>n;
    if(n%2==0) Handle_chan(n,1);
    else Handle_le(n,1);
    return 0;
}
