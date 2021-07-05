/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
string str;
void Handle()
{
    stack<long long> stk;
    for(long long i=str.size()-1;i>=0;i--)
    {
        if(str[i]=='+'||str[i]=='-'||str[i]=='*'||str[i]=='/')
        {
            long long first=stk.top(); stk.pop();
            long long second=stk.top(); stk.pop();
            long long tmp;
            if(str[i]=='+') tmp=first+second;
            else if(str[i]=='-') tmp=first-second;
            else if(str[i]=='*') tmp=first*second;
            else if(str[i]=='/') tmp=first/second;
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
