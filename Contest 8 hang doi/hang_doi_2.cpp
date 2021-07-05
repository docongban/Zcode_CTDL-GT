/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
void Handle()
{
    int n;
    cin>>n;
    queue<int> q;
    while(n--)
    {
        string str;
        cin>>str;
        if(str=="PUSH")
        {
            int x;
            cin>>x;
            q.push(x);
        }
        else if(str=="POP"&&q.size()>0) q.pop();
        else if(str=="PRINTFRONT") 
        {
            if(q.size()>0) cout<<q.front()<<endl;
            else cout<<"NONE"<<endl;
        }
    }
}
int main()
{
    Handle();
    return 0;
}
