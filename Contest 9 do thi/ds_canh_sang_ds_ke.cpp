#include<bits/stdc++.h>
using namespace std;
void Handle(int v,int e)
{
    vector<int> ke[1000];
    for(int i=0;i<e;i++)
    {
        int a,b;
        cin>>a>>b;
        //đồ thị vô hướng thêm cạnh b vào đỉnh a và cạnh a vào đỉnh b;
        ke[a].push_back(b);
        ke[b].push_back(a);
    }
    for(int i=1;i<=v;i++) sort(ke[i].begin(),ke[i].end());
    for(int i=1;i<=v;i++)
    {
        cout<<i<<": ";
        for(int j=0;j<ke[i].size();j++)
        {
            cout<<ke[i][j]<<" ";
        }
        cout<<endl;
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
        cout<<endl;
    }
    return 0;
}