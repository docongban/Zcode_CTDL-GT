/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;;
string str;
void Handle()
{
    stack<long long> stk;
    for(long long i=0;i<str.size();i++)
    {
        if(str[i]=='+'||str[i]=='-'||str[i]=='*'||str[i]=='/')
        {
            long long first=stk.top(); stk.pop();
            long long second=stk.top(); stk.pop();
            long long tmp;
            if(str[i]=='+') tmp=second+first;
            else if(str[i]=='-') tmp=second-first;
            else if(str[i]=='*') tmp=second*first;
            else if(str[i]=='/') tmp=second/first;
            stk.push(tmp);
        }
        else stk.push((long long)(str[i]-'0'));
    }
    cout<<stk.top();
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
