#include<bits/stdc++.h>
using namespace std;
vector<int> ke[1005];
bool check[1005];
int truoc[1005];
void BFS(int u,int v)
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
                truoc[ke[res][i]]=res;
                q.push(ke[res][i]);
            }
        }
    }
}
void Truy_vet(int u,int v)
{
    if(check[v]==0)
    {
        cout<<-1;
        return;
    }
    vector<int> arr;
    while(u!=v)
    {
        arr.push_back(u);
        u=truoc[u];
    }
    arr.push_back(v);
    reverse(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++) cout<<arr[i]<<" ";
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
        int v,e,a,b;
        cin>>v>>e>>a>>b;
        Handle(v,e);
        BFS(a,b);
        Truy_vet(b,a);
        cout<<endl;
    }
    return 0;
}