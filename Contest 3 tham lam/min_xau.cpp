/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
string str;
void Handle(int k)
{
    priority_queue<int ,vector<int>> q;
    int tmp[1005]={0};
    for(int i=0;i<str.size();i++) tmp[str[i]]++;
    for(int i=0;i<str.size();i++)
    {
        if(tmp[str[i]]>0)
        {
            q.push(tmp[str[i]]);
            tmp[str[i]]=0;
        }
    }
    while(k>0&&q.size()>0)
    {
        k--;
        int t=q.top(); q.pop();
        t--;
        q.push(t);
    }
    long long kq=0;
    while(q.size()>0)
    {
        int x=q.top(); q.pop();
        kq+=x*x;
    }
    cout<<kq;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k;
        cin>>k>>str;
        Handle(k);
        cout<<endl;
    }
    return 0;
}
