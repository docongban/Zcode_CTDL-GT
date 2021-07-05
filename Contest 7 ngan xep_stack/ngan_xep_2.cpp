/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;;
string str;
int n;
int main()
{
    int t;
    cin>>t;
    stack<int> stk;
    while(t--)
    {
        cin>>str;
        if(str=="PUSH")
        {
            cin>>n;
            stk.push(n);
        }
        if(str=="POP"&&stk.size()>0) stk.pop();
        if(str=="PRINT") 
        {
            if(stk.size()>0) cout<<stk.top()<<endl;
            if(stk.size()==0) cout<<"NONE"<<endl;
        }
    }
    return 0;
}
