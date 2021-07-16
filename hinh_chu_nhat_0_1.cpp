/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int arr[500][500];
int tmp[500];
void Init(int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++) cin>>arr[i][j];
    }
}
int Dien_tich(int tmp[500],int n,int m)
{
    stack<int> kq;
    int dt=0,max_dt=0,i=0;
    int x;
    while(i<m)
    {
        if(kq.empty()||tmp[kq.top()]<=tmp[i]) kq.push(i++);
        else
        {
            x=tmp[kq.top()];
            kq.pop();
            dt=x*i;
            if(!kq.empty())
            {
                dt=x*(i-1-kq.top());
            }
            max_dt=max(dt,max_dt);
        }
    }
    while(!kq.empty())
    {
        x=tmp[kq.top()];
        kq.pop();
        dt=x*i;
        if(!kq.empty()) dt=x*(i-1-kq.top());
        max_dt=max(max_dt,dt);
    }
    return max_dt;
}
void Hanlde(int n,int m)
{
    int kq=Dien_tich(arr[0],n,m);
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==1)
            {
                arr[i][j]+=arr[i-1][j];
            }
        }
        kq=max(kq,Dien_tich(arr[i],n,m));
    }
    cout<<kq;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        Init(n,m);
        Hanlde(n,m);
        cout<<endl;
    }
    return 0;
}
