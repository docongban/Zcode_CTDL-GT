#include<bits/stdc++.h>
using namespace std;
vector<int> ke[1005];
bool check[1005];
int truoc[1005];
vector< pair<int,int>> kq;
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
                truoc[ke[res][i]]=res;
                q.push(ke[res][i]);
            }
        }
    }
}
int Thanh_phan_lien_thong(int v)
{
    int dem=0;
    for(int i=1;i<=v;i++)
    {
        if(check[i]==0)
        {
            dem++;
            BFS(i);
        }
    }
    return dem;
}
void Canh(int v,int e,int canh,int tplt,vector< pair<int ,int>> res)
{
    for(int i=0;i<e;i++)
    {
        if(i!=canh)
        {
            ke[res[i].first].push_back(res[i].second);
            ke[res[i].second].push_back(res[i].first);
        }
    }
    int x=Thanh_phan_lien_thong(v);
    if(x>tplt)
    {
        if(res[canh].first<res[canh].second) kq.push_back({res[canh].first,res[canh].second});
        else kq.push_back({res[canh].second,res[canh].first});
    }
}
void Handle(int v,int e)
{
    vector< pair<int ,int>> res;
    for(int i=0;i<e;i++)
    {
        int a,b;
        cin>>a>>b;
        res.push_back({a,b});
        ke[a].push_back(b);
        ke[b].push_back(a);
    }
    int x=Thanh_phan_lien_thong(v);
    for(int i=0;i<e;i++)
    {
        for(int i=0;i<=1000;i++) ke[i].clear();
        memset(check,0,sizeof(check));
        Canh(v,e,i,x,res);
    }
    sort(kq.begin(),kq.end());
    for(int i=0;i<kq.size();i++) cout<<kq[i].first<<" "<<kq[i].second<<" ";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        for(int i=0;i<=1000;i++) ke[i].clear();
        memset(check,0,sizeof(check));
        kq.clear();
        int v,e;
        cin>>v>>e;
        Handle(v,e);
        cout<<endl;
    }
    return 0;
}