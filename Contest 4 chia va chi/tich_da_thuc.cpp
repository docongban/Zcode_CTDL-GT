/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
struct DT
{
    int hs,mu;
};
void Handle(int m,int n)
{
    vector< vector<DT> > kq;
    DT arr[100],brr[100];
    for(int i=0;i<m;i++)
    {
        cin>>arr[i].hs;
        arr[i].mu=i;
    }
    for(int i=0;i<n;i++)
    {
        cin>>brr[i].hs;
        brr[i].mu=i;
    }
    for(int i=0;i<m;i++)
    {
        vector<DT> v;
        for(int j=0;j<n;j++)
        {
            v.push_back({arr[i].hs*brr[j].hs,arr[i].mu+brr[j].mu});
        }
        kq.push_back(v);
    }
    int mu=0;
    while(mu<m+n-1)
    {
        int hs=0;
        for(int i=0;i<kq.size();i++)
        {
            for(int j=0;j<kq[i].size();j++)
            {
                if(kq[i][j].mu==mu) hs+=kq[i][j].hs;
            }
        }
        cout<<hs<<" ";
        mu++;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        Handle(m,n);
        cout<<endl;
    }
    return 0;
}
