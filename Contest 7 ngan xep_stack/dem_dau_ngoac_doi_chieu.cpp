/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;;
string str;
void Handle()
{
    stack<char> stk;
    for(int i=0;i<str.size();i++)//tính số ngoặc sai chưa khớp 1 cặp
    {
        if(str[i]=='('||(str[i]==')'&&stk.size()==0)) stk.push(str[i]);
        else if(str[i]==')')
        {
            if(stk.top()=='('&&stk.size()>0) stk.pop();
            else stk.push(str[i]);
        }
    }
    int left=0,right=0;
    while(stk.size()>0)
    {
        if(stk.top()=='(') left++;
        else right++;
        stk.pop();
    }
    cout<<left/2+right/2+left%2+right%2;
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
