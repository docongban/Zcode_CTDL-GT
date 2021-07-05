/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
string str;
void Handle(string str)
{
    int i=str.size()-1;
	while(str[i]=='0'&&i>=0) i-=1;
	if(i>=0)
	{
		str[i]='0';
		for(int j=i+1;j<str.size();j++) str[j]='1';
		cout<<str;
	}
	else
	{
		for(int j=0;j<str.size();j++) cout<<1;
	}
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
