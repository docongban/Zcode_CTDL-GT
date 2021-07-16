/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
string str;
int Uu_tien(char c)
{
    if(c=='^') return 3;
    else if(c=='*'||c=='/') return 2;
    else if(c=='+'||c=='-') return 1;
    return -1; 
}
string Trung_to_hau_to(string str)
{
    stack<char> stk;
    string tmp;
    for(int i=0;i<str.size();i++)
    {
        char c=str[i];
        if((c>='0'&&c<='9')) tmp+=c;
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
            if(tmp[tmp.size()-1]>='0'&&tmp[tmp.size()-1]<='9') tmp+='#';
            while(!stk.empty()&&Uu_tien(str[i])<=Uu_tien(stk.top()))
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
    return tmp;
}
void Handle(string str)
{
    str=Trung_to_hau_to(str);
    stack<long long> stk;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='+'||str[i]=='-'||str[i]=='*'||str[i]=='/')
        {
            long long a=stk.top(); stk.pop();
            long long b=stk.top(); stk.pop();
            long long tmp;
            if(str[i]=='+') tmp=b+a;
            else if(str[i]=='-') tmp=b-a;
            else if(str[i]=='*') tmp=b*a;
            else if(str[i]=='/') tmp=b/a;
            stk.push(tmp);
        }
        else 
        {
            long long tmp=0;
            while(i<str.size()&&str[i]>='0'&&str[i]<='9')
            {
                tmp=tmp*10+(int)(str[i]-'0');
                i++;
            }
            if(str[i]!='#') i--;
            stk.push(tmp);
        }
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
        Handle(str);
        cout<<endl;
    }
    return 0;
}
