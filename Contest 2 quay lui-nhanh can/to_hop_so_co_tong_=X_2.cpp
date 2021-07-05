/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int arr[100];
vector< vector<int> > kq;
void Init(int n)
{
    for(int i=1;i<=n;i++) cin>>arr[i];
}
void De_quy(int n,int k,int i,int tong,vector<int> v)
{
    if(tong>k) return;
    if(tong==k) 
    {
        kq.push_back(v);
        return;
    }
    for(int j=i;j<=n;j++) 
    {
        if(tong+arr[j]<=k)
        {
            v.push_back(arr[j]);
            De_quy(n,k,j,tong+arr[j],v);
            v.pop_back();
        }
    }
}
void Handle(int n,int k)
{
    sort(arr+1,arr+n+1);
    vector<int> v;
    v.clear();
    kq.clear();
    De_quy(n,k,1,0,v);
    if(kq.size()==0) cout<<-1;
    else
    {
        cout<<kq.size()<<" ";
        for(int i=0;i<kq.size();i++)
        {
            for(int j=0;j<kq[i].size();j++)
            {
                if(j==0) cout<<"{";
                cout<<kq[i][j];
                if(j==kq[i].size()-1) cout<<"}";
                else cout<<" ";
            }
            cout<<" ";
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        Init(n);
        Handle(n,k);
        cout<<endl;
    }
    return 0;
}
