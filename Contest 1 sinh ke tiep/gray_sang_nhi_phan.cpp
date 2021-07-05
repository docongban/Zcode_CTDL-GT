/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
string str;
void Xu_li(string str)
{
	string NP="";
	NP=str[0];
	for(int i=1;i<str.size();i++)
	{
		int x=NP.size()-1;
		if(NP[x]!=str[i]) NP+="1";
		else NP+="0";
	}
	cout<<NP<<endl;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>str;
		Xu_li(str);
	}
	return 0;
}

