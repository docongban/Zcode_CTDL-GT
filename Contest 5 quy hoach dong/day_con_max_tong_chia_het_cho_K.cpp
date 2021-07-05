/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int x,tmp[n+5][k];
        tmp[0][0]=0;
        for(int i=1;i<k;i++) tmp[0][i]=-1005;
        for(int i=1;i<=n;i++) 
        {
            cin>>x;
            x%=k;
            for(int j=0;j<k;j++) tmp[i][j]=max(tmp[i-1][j],tmp[i-1][(j+k-x)%k]+1);
        }
        cout<<tmp[n][0];
        cout<<endl;
    }
    return 0;
}
