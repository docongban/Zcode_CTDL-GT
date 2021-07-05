/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
string str;
void Xu_li(string str)
{
	for(int i=0;i<str.size();i++)
	{
		if(i==0) cout<<str[i];
		else
		{
			if(str[i]!=str[i-1]) cout<<1;
			else cout<<0;
		}
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

