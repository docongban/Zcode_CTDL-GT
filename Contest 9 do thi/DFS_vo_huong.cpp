#include<bits/stdc++.h>
using namespace std;
vector<int> ke[1005];
bool check[1005];
void DFS(int u)
{
    check[u]=1;
    cout<<u<<" ";
    for(int i=0;i<ke[u].size();i++)
    {
        if(check[ke[u][i]]==0) DFS(ke[u][i]);
    }
}
void Handle(int v,int e,int u)
{
    for(int i=0;i<=1000;i++) ke[i].clear();
    memset(check,false,sizeof(check));
    for(int i=1;i<=e;i++) 
    {
        int a,b;
        cin>>a>>b;
        ke[a].push_back(b);
        ke[b].push_back(a);
    }
    DFS(u);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int v,e,u;
        cin>>v>>e>>u;
        Handle(v,e,u);
        cout<<endl;
    }
    return 0;
}