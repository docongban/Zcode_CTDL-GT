/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
bool test[500];
int arr[500];
vector<int> v;
vector< vector<int> > res;
int tmp[500];
void Sang()
{
    for(int i=2;i<=200;i++)
    {
        if(test[i]==0)
        {
            v.push_back(i);
            for(int j=i*i;j<=200;j+=i) test[j]=1;
        }
    }
}
void Handle(int n,int p,int s,int i)
{
    int x=1;
    for(int j=0;j<v.size();j++) 
    {
        tmp[x]=v[j];
        x++;
    }
    for(int j=0;j<=1;j++)
    {
        arr[i]=j;
        if(i==x)
        {
            int tong=0;
            for(int k=1;k<=x;k++)
            {
                if(arr[k]==1) tong+=tmp[k];
            }
            if(tong==s)
            {
                vector<int > tam;
                for(int k=1;k<=x;k++)
                {
                    if(arr[k]==1) tam.push_back(tmp[k]);
                }
                res.push_back(tam);
            }
        }
        else Handle(n,p,s,i+1);
    }
}
int main()
{
    int t;
    cin>>t;
    Sang();
    while(t--)
    {
        int n,p,s;
        cin>>n>>p>>s;
        res.clear();
        Handle(n,p,s,1);
        for(int i=0;i<res.size();i++)
        {
            for(int j=0;j<res[i].size();j++)
            {
                cout<<res[i][j];
                if(j<res[i].size()-1) cout<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
