/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int arr[1000][1000];
int tmp[1000][1000];
void Init(int n,int m)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++) 
        {
            cin>>arr[i][j];
            tmp[i][j]=0;
        }
    }
}
void Handle(int n,int m)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(i==1&&j==1) tmp[i][j]=arr[i][j];
            else if(i==1) tmp[i][j]=arr[i][j]+tmp[i][j-1];
            else if(j==1) tmp[i][j]=arr[i][j]+tmp[i-1][j];
            else tmp[i][j]=arr[i][j]+min(tmp[i-1][j-1],min(tmp[i-1][j],tmp[i][j-1]));
        }
    }
    cout<<tmp[n][m];
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        Init(n,m);
        Handle(n,m);
        cout<<endl;
    }
    return 0;
}
