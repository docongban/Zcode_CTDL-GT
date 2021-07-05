#include<bits/stdc++.h>
using namespace std;
vector<int> ke[1005];
bool check[1005];
void BFS(int u)
{
    queue<int> q;
    q.push(u);
    while(q.size()>0)
    {
        int res=q.front(); q.pop();
        cout<<res<<" ";
        check[res]=1;
        for(int i=0;i<ke[res].size();i++)
        {
            if(check[ke[res][i]]==0)
            {
                q.push(ke[res][i]);
                check[ke[res][i]]=1;
            }
        }
    }
}
void Handle(int v,int e,int u)
{
    for(int i=0;i<=1000;i++) ke[i].clear();
    memset(check,0,sizeof(check));
    for(int i=1;i<=e;i++) 
    {
        int a,b;
        cin>>a>>b;
        ke[a].push_back(b);
    }
    BFS(u);
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