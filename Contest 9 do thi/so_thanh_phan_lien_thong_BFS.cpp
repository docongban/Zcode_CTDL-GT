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
        check[res]=1;
        for(int i=0;i<ke[res].size();i++)
        {
            if(check[ke[res][i]]==0)
            {
                check[ke[res][i]]=1;
                q.push(ke[res][i]);
            }
        }
    }
}
void Handle(int v,int e)
{
    for(int i=0;i<=1000;i++) ke[i].clear();
    memset(check,0,sizeof(check));
    for(int i=1;i<=e;i++)
    {
        int a,b;
        cin>>a>>b;
        ke[a].push_back(b);
        ke[b].push_back(a);
    }
    int count=0;
    for(int i=1;i<=v;i++)
    {
        if(check[i]==0)
        {
            count++;
            BFS(i);
        }
    }
    cout<<count;
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