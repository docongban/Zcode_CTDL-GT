/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int arr[1000000];
void Init(int n)
{
    for(int i=0;i<n;i++) cin>>arr[i];
}
void Lon(int n,int next[],char x)
{
    stack<int> stk;
    for(int i=n-1;i>=0;i--)
    {
        while(!stk.empty()&&((x=='L')? arr[stk.top()]<=arr[i]:arr[stk.top()]>=arr[i]))
        {
            stk.pop();
        }
        if(!stk.empty()) next[i]=stk.top();
        else next[i]=-1;
        stk.push(i);
    }
}
void Handle(int n)
{
    int lon[n];
    int nho[n];
    Lon(n,lon,'L');
    Lon(n,nho,'N');
    for(int i=0;i<n;i++)
    {
        if(lon[i]!=-1&&nho[lon[i]]!=-1) cout<<arr[nho[lon[i]]]<<" ";
        else cout<<"-1"<<" ";
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Init(n);
        Handle(n);
        cout<<endl;
    }
    return 0;
}
