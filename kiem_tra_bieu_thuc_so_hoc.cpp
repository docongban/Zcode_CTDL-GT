/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
string str;
bool check=true;
void Handle()
{
    stack<char> stk;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]==')')
        {
            check=true;
            char top=stk.top();
            stk.pop();
            while(top!='(')
            {
                if(top=='+'||top=='-'||top=='*'||top=='/') check=false;
                top=stk.top();
                stk.pop();
            }
            if(check==true) break;
        }
        else stk.push(str[i]);
    }
    if(check==true) cout<<"Yes";
    else cout<<"No";
}
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        getline(cin,str);
        Handle();
        cout<<endl;
    }
    return 0;
}
