#include<bits/stdc++.h>
using namespace std;
vector<int> ke[1005];
bool check[1005];
int truoc[1005];
bool DFS(int u)
{
    check[u]=1;
    truoc[u]=1;
    for(int i=0;i<ke[u].size();i++)
    {
        if(check[ke[u][i]]==0&&DFS(ke[u][i])) return true;
        else if(truoc[ke[u][i]]) return true;
    }
    truoc[u]=0;
    return false;
}
void Handle(int v,int e)
{
    for(int i=0;i<=1000;i++) ke[i].clear();
    memset(check,0,sizeof(check));
    memset(truoc,0,sizeof(truoc));
    for(int i=1;i<=e;i++)
    {
        int a,b;
        cin>>a>>b;
        ke[a].push_back(b);
    }
    int test=0;
    for(int i=1;i<=v;i++)
    {
        if(check[i]==0&&DFS(i)) test=1;
    }
    if(test==1) cout<<"YES";
    else cout<<"NO";
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