#include<bits/stdc++.h>
using namespace std;
vector<int> ke[1005];
bool check[1005];
int truoc[1005];
void DFS(int u,int v)
{
    check[u]=1;
    for(int i=0;i<ke[u].size();i++)
    {
        if(check[ke[u][i]]==0)
        {
            truoc[ke[u][i]]=u;
            DFS(ke[u][i],v);
        }
    }
}
bool Truy_van(int u,int v)
{
    if(check[u]==0)
    {
        return false;
    }
    vector<int> arr;
    while(u!=v)
    {
        if(u==0)
        {
            return false;
        }
        arr.push_back(u);
        u=truoc[u];
    }
    arr.push_back(v);
    sort(arr.begin(),arr.end());
    return true;
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
        ke[b].push_back(a);
    }
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
        int t;
        cin>>t;
        while(t--)
        {
            memset(check,0,sizeof(check));
            int x,y;
            cin>>x>>y;
            DFS(x,y);
            if(Truy_van(y,x)) cout<<"YES";
            else cout<<"NO";
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}