#include<bits/stdc++.h>
using namespace std;
int arr[1000][1000];
void Init(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++) cin>>arr[i][j];
    }
}
void Handle(int n)
{
    for(int i=1;i<=n;i++) 
    {
        for(int j=1;j<=n;j++)
        {
            if(arr[i][j]==1)
            {
                cout<<j<<" ";
            }
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    Init(n);
    Handle(n);
    return 0;
}