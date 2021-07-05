/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int arr[20];
string str;
void Handle(int n,int k,int i)
{
    for(int j=arr[i-1]+1;j<=n-k+i;j++)
    {
        arr[i]=j;
        if(i==k)
        {
            for(int i=1;i<=k;i++)
            {
                cout<<char(arr[i]+64);
            }
            cout<<endl;
        }
        else Handle(n,k,i+1);
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        Handle(n,k,1);
        cout<<endl;
    }
    return 0;
}
