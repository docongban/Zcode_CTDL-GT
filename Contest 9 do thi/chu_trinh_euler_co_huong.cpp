#include<bits/stdc++.h>
using namespace std;
vector<int> ke[1005];
bool check[1005];
int bb_vao[1005],bb_ra[1005];
int DFS(int u)
{
    check[u]=1;
    int count=0;
    for(int i=0;i<ke[u].size();i++)
    {
        if(check[ke[u][i]]==0)
        {
            DFS(ke[u][i]);
        }
    }
    return count;
}
void Handle(int v,int e)
{
    for(int i=2;i<=1000;i++) ke[i].clear();
    memset(check,0,sizeof(check));
    memset(bb_ra,0,sizeof(bb_ra));
    memset(bb_vao,0,sizeof(bb_vao));
    for(int i=1;i<=e;i++) 
    {
        int a,b;
        cin>>a>>b;
        bb_ra[a]++;
        bb_vao[b]++;
        ke[a].push_back(b);
    }
    int check=1;
    for(int i=1;i<=v;i++)
    {
        if(bb_ra[i]!=bb_vao[i])
        {
            check=0;
            break;
        }
    }
    if(check==1&&DFS(1)==v) check=0;
    cout<<check;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int v,e;
        cin>>v>>e;
        Handle(v,e);
        cout<<endl;
    }
    return 0;
}