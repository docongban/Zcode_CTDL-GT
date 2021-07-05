/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
string str;
int Uu_tien(char s)
{
    if(s=='^') return 3;
    else if(s=='*'||s=='/') return 2;
    else if(s=='+'||s=='-') return 1;
    else return -1;
}
void Handle(string str)
{
    stack<char> stk;
    string tmp;
    for(int i=0;i<str.size();i++)
    {
        char c=str[i];
        if((c>='A'&&c<='Z')||(c>='a'&&c<='z')||(c>='0'&&c<='9')) tmp+=c;
        else if(c=='(') stk.push('(');
        else if(c==')')
        {
            while(!stk.empty()&&stk.top()!='(')
            {
                char x=stk.top();
                stk.pop();
                tmp+=x; 
            }
            stk.pop();
        }
        else 
        {
            while(!stk.empty()&&Uu_tien(str[i]) <= Uu_tien(stk.top()) )
            {
                char x=stk.top();
                stk.pop();
                tmp+=x; 
            }
            stk.push(c);
        }
    }
    while(!stk.empty())
    {
        char x=stk.top();
        stk.pop();
        tmp+=x; 
    }
    cout<<tmp;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        Handle(str);
        cout<<endl;
    }
    return 0;
}
