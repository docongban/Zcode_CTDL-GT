/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int arr[100];
int brr[100];
vector< vector<int> > kq;
void Nhap(int n)
{
    for(int i=1;i<=n;i++) cin>>brr[i];
    sort(brr+1,brr+n+1);
}
void Handle(int n,int x,int i)
{
    for(int j=0;j<=1;j++) 
    {
        arr[i]=j;
        if(i==n)
        {
            int tam=0;
            for(int k=1;k<=n;k++) 
            {
                if(arr[k]==1) tam+=brr[k];
            }
            if(tam==x)
            {
                vector<int> v;
                for(int k=1;k<=n;k++)
                {
                    if(arr[k]==1) v.push_back(brr[k]);
                }
                kq.push_back(v);
            }
        }
        else Handle(n,x,i+1);
    }
}
int main()
{
    int n,x;
    cin>>n>>x;
    kq.clear();
    Nhap(n);
    Handle(n,x,1);
    int dem=0;
    if(kq.size()==0) cout<<-1;
    else
    {
        for(int i=0;i<kq.size();i++)
        {
            for(int j=0;j<kq[i].size();j++)
            {
                cout<<kq[i][j]<<" ";
            }
            cout<<endl;
            dem++;
        }
    }
    cout<<dem;
    return 0;
}
