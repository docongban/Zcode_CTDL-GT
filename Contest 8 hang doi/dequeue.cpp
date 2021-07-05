/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
void Handle()
{
    int t;
    cin>>t;
    deque<int> dq;
    while(t--)
    {
        string str;
        cin>>str;
        if(str=="PUSHFRONT")
        {
            int x;
            cin>>x;
            dq.push_front(x);
        }
        else if(str=="PRINTFRONT")
        {
            if(dq.size()>0) cout<<dq.front()<<endl;
            else cout<<"NONE"<<endl;
        }
        else if(str=="POPFRONT"&&dq.size()>0) dq.pop_front();
        else if(str=="PUSHBACK")
        {
            int n;
            cin>>n;
            dq.push_back(n);
        }
        else if(str=="PRINTBACK") 
        {
            if(dq.size()>0) cout<<dq.back()<<endl;
            else cout<<"NONE"<<endl;
        }
        else if(str=="POPBACK"&&dq.size()>0) dq.pop_back();
    }
}
int main()
{
    Handle();
    return 0;
}
