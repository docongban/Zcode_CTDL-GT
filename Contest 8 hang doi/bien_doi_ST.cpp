/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
struct data
{
    int x,dem;
};
int Handle(int a,int b)
{
    set<int> s;
    s.insert(a);
    queue<data> q;
    q.push({a, 0});
    while(q.size()>0)
    {
        data tmp=q.front(); q.pop();
        if(tmp.x==b) return tmp.dem;
        if(tmp.x*2==b||tmp.x-1==b) return tmp.dem+1;
        if(s.find(tmp.x*2)==s.end()&&tmp.x<b)
        {
            q.push({tmp.x*2,tmp.dem+1});
            s.insert(tmp.x*2);
        }
        if(tmp.x-1>0&&s.find(tmp.x-1)==s.end())
        {
            q.push({tmp.x-1,tmp.dem+1});
            s.insert(tmp.x-1);
        }
    }

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        cout<<Handle(a,b);
        cout<<endl;
    }
    return 0;
}
