/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
string str;
void Handle()
{
    stack<int> so;
    stack<char> ki_tu;
    string tmp="",kq="";
    for(int i=0;i<str.size();i++)
    {
        int count=0;
        if(str[i]>='0'&&str[i]<='9')
        {
            while(str[i]>='0'&&str[i]<='9')
            {
                count=count*10+str[i]-'0';
                i++;
            }
            i--;
            so.push(count);
        }
        else if(str[i]==']')
        {
            tmp="";
            count=0;
            if(!so.empty())
            {
                count=so.top();
                so.pop();
            }
            while(!ki_tu.empty()&&ki_tu.top()!='[')
            {
                tmp=ki_tu.top()+tmp;
                ki_tu.pop();
            }
            if(!ki_tu.empty()&&ki_tu.top()=='[') ki_tu.pop();
            for(int j=0;j<count;j++) kq=kq+tmp;
            for(int j=0;j<kq.size();j++) ki_tu.push(kq[j]);
            kq="";
        }
        else if(str[i]=='[')
        {
            if(str[i-1]>='0'&&str[i-1]<='9') ki_tu.push(str[i]);
            else 
            {
                ki_tu.push(str[i]);
                so.push(1);
            }
        }
        else ki_tu.push(str[i]);
    }
    while(!ki_tu.empty())
    {
        kq=ki_tu.top()+kq;
        ki_tu.pop();
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
