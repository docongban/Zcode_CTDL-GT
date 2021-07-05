#include<bits/stdc++.h>
using namespace std;
vector<int> ke[1005];
bool check[1005];
void DFS(int u)
{
    check[u]=1;
    for(int i=0;i<ke[u].size();i++)
    {
        if(check[ke[u][i]]==0) DFS(ke[u][i]);
    }
}
bool Tree(int v)
{
    DFS(1);
    for(int i=1;i<=v;i++)
    {
        if(check[i]==0) return false;
    }
    return true;
}
void Handle(int v)
{
    for(int i=0;i<=1000;i++) ke[i].clear();
    memset(check,0,sizeof(check));
    for(int i=1;i<v;i++) 
    {
        int a,b;
        cin>>a>>b;
        ke[a].push_back(b);
        ke[b].push_back(a);
    }
    if(Tree(v)) cout<<"YES";
    else cout<<"NO";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int v;
        cin>>v;
        Handle(v);
        cout<<endl;
    }
    return 0;
}