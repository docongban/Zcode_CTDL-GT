/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
long long modulo=1e9+7;
long long tmp[105][50005];
//tmp[i][j] là số có i chữ số và tổng chữ số là j
int main()
{
    for(int i=0;i<=100;i++) tmp[i][0]=0;
    for(int j=0;j<=50000;j++) tmp[0][j]=0;
    for(int j=1;j<=9;j++) tmp[1][j]=1;
    for(int i=1;i<=100;i++) 
    {
        for(int x=0;x<=9;x++)
        {
            for(int j=x;j<=50000;j++) tmp[i][j]=(tmp[i][j]%modulo+tmp[i-1][j-x]%modulo)%modulo;
        }
    }
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        cout<<tmp[n][k];
        cout<<endl;
    }
    return 0;
}
