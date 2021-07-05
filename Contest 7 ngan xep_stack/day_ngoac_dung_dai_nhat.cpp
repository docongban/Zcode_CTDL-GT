/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
string str;
void Handle()
{
    stack<int> stk;
    stk.push(-1);
    int count=0;
    for(int i=0;i<str.size();i++)
    {
        if(str[i] == '(') stk.push(i);//thêm vị trí bắt đầu
        else
        {
            stk.pop();
            if(stk.size()>0) count=max(count,i-stk.top());//độ dài
            if(stk.size()==0) stk.push(i);//tiếp tục đến vị trí tiếp theo
        }
    }
    cout<<count;
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
