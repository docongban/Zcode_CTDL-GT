/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
string str;
void Handle()
{
    string kq;
    stack<int> stk;
    for(int i=0;i<=str.size();i++)
    {
        stk.push(i+1);
        if(i==str.size()||str[i]=='I')
        {
            while(!stk.empty())
            {
                kq+=to_string(stk.top());
                stk.pop();
            }
        }
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
