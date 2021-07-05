#include<bits/stdc++.h>
using namespace std;
vector<int> ke[1005];
bool check[1005];
void DFS(int u)
{
    check[u]=1;
    for(int i=0;i<ke[u].size();i++)
    {
        if(check[ke[u][i]]==0)
        {
            DFS(ke[u][i]);
        }
    }
}
int Euler(int u)
{
    int count=0;
    for(int i=0;i<u;i++)//đếm đỉnh bậc lẻ
    {
        if(ke[i].size()%2!=0) count++;
    }
    //count==2 là nửa euler
    //count==0 là Euler
    if(count>2) return 0;
    if(count==1) return 1;
    else return 2;
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
    cout<<Euler(v);
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