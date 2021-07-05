/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
long long tmp[100][100];
void Handle(int n,int m)
{
    memset(tmp, 0, sizeof(tmp));
    for(int i=0;i<100;i++) tmp[i][0]=1;
    for(int j=0;j<100;j++) tmp[0][j]=1;
    tmp[0][0]=0;
    for(int i=0;i<100;i++) 
    {
        for(int j=0;j<100;j++)
        {
            if(i==0||j==0) continue;
            tmp[i][j]=tmp[i-1][j]+tmp[i][j-1];
        }
    } 
    cout<<tmp[n][m];
}
int main()
{
    //Handle();
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        //cout<<tmp[n][m]<<endl;
        Handle(n,m);cout<<endl;
    }
    return 0;
}
