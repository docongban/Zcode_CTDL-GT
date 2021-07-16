/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;  
string str;
void Handle()
{
    stack<string> stk;
    for(int i=str.size();i>=0;i--)
    {
        if(str[i]=='+'||str[i]=='-'||str[i]=='*'||str[i]=='/')
        {
            string first=stk.top(); stk.pop();
            string second=stk.top(); stk.pop();
            string tmp="("+first+str[i]+second+")";
            stk.push(tmp);
        }
        else stk.push(string(1,str[i]));
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
