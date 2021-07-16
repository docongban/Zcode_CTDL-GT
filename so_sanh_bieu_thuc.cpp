/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
string str;
string str2;
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
    string tmp[105];
	int x=0;
	for(int i=0;i<str.size();i++)
	{
		if(str[i]!='('&&str[i]!=')') tmp[x++]=str[i];
	}
    string tmp2[105];
    int y=0;
    for(int i=0;i<str2.size();i++)
    {
        tmp2[y++]=str2[i];
    }
    int check=0;
    if(tmp==tmp2) check=1;
    else check=0;
    if(check==1) cout<<"YES";
    else cout<<"NO";
}
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        cin>>str>>str2;
        Handle();
        cout<<endl;
    }
    return 0;
}
