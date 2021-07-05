/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
string str;
void Handle()
{
    stack<char> stk;
    int tmp=0,kq=0;
    for(int i=0;i<str.size();i++)
    {
        if(stk.size()==0) stk.push(str[i]);
        else if(stk.top()=='['&&str[i]==']')
        {
            stk.pop();
            tmp+=2;
        }
        else if(stk.top()==']'&&str[i]=='[')
        {
            kq+=stk.size()+tmp;
            stk.pop();
        }
        else if(str[i]=='[')
        {
            stk.push(str[i]);
        }
        else if(stk.top()==']'&&str[i]==']') stk.push(str[i]);
        if(stk.size()==0) tmp=0;
    }
    cout<<kq;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>str;
        Handle();
        cout<<endl;
    }
    return 0;
}
