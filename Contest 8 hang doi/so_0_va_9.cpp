/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
string Handle(int n)
{
    queue<string> q;
    q.push("9");
    while(q.size()>0)
    {
        string str=q.front(); q.pop();
        long long tmp=0;
        for(int i=0;i<str.size();i++)
        {
            tmp=tmp*10+(int)(str[i]-'0');
            tmp%=n;
        }
        if(tmp==0 ) return str;
        q.push(str+"0");
        q.push(str+"9");
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
        cout<<Handle(n)<<endl;
    }
    return 0;
}
