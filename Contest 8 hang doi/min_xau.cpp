/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
string str;
void Handle(long long k)
{
    priority_queue<long long,vector<long long>> q;
    long long count[1000]={0};
    for(int i=0;i<str.size();i++) count[str[i]]++;
    for(int i=0;i<str.size();i++)
    {
        if(count[str[i]]>0)
        {
            q.push(count[str[i]]);
            count[str[i]]=0;
        }
    }
    while(k>0&&q.size()>0)
    {
        k--;
        long long t=q.top(); q.pop();
        t--;
        q.push(t);
    }
    long long kq=0;
    while(q.size()>0)
    {
        long long x=q.top(); q.pop();
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
        long long k;
        cin>>k>>str;
        Handle(k);
        cout<<endl;
    }
    return 0;
}
