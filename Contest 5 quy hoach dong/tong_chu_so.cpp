/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int tmp[10000][10000];
int Min(int a,int b) 
{
    if(a>b||a<0||b<0||a>10000||b>10000) return -1;
    if(a==0&&b==0) return 0;
    if(tmp[a][b]!=-1) return tmp[a][b];
    int res=101;
    for(int i=9;i>=1;i--)
    {
        int k=Min(a-i,b-i*i);
        if(k!=-1) res=min(res,k+1);
    }
    return tmp[a][b]=res;
}
void Handle(int a,int b)
{
    memset(tmp,-1,sizeof(tmp));
    tmp[0][0]=0;
    int k=Min(a,b);
    if(k==-1||k>100) cout<<-1;
    else
    {
        while(a>0&&b>0)
        {
            for(int i=1;i<=9;i++)
            {
                if(a>=i&&b>=i*i&&1+tmp[a-i][b-i*i]==tmp[a][b])
                {
                    cout<<i;
                    a-=i;
                    b-=i*i;
                    break;
                }
            }
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        Handle(a,b);
        cout<<endl;
    }
    return 0;
}
