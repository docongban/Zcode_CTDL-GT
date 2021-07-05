/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
string str;
void Xu_li(string str)
{
	// str.size()->0; str[i]='0'->str[i]='1';i<j<str.size() str[j]=0
	int i=str.size()-1;
	while(str[i]=='1'&&i>=0) i-=1;
	if(i>=0)
	{
		str[i]='1';
		for(int j=i+1;j<str.size();j++) str[j]='0';
		cout<<str;
	}
	else
	{
		for(int j=0;j<str.size();j++) cout<<0;
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>str;
		Xu_li(str);
		cout<<endl;
	}
	return 0;
}

