/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
string str;
void Handle()
{
    stack<int> stk;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='('&&i>0) stk.push(i);
        else if(str[i]==')'&&stk.size()>0)
        {
            if(str[stk.top()-1]=='-')
            {
                for(int j=stk.top();j<i;j++)
                {
                    if(str[j]=='-') str[j]='+';
                    else if(str[j]=='+') str[j]='-';
                }
            }
            stk.pop();
        }
    }
    for(int i=0;i<str.size();i++)
    {
        if(str[i]!='('&&str[i]!=')') cout<<str[i];
    }
}
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        cin>>str;
        Handle();
        cout<<endl;
    }
    return 0;
}
