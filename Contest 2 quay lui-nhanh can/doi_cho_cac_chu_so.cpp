/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
string str;
void Xu_li(int k)
{
	for(int i=0;i<str.size();i++)
	{
		char Max= str[str.size()-1];
		int vt=str.size()-1;
		for(int j=str.size()-1;j>i&&k>0;j--)
		{
			if(Max<str[j])
			{
				Max=str[j];
				vt=j;
			}
		}
		if(Max>str[i]&&k>0)
		{
			swap(str[i],str[vt]);
			k--;
		}
	}
	cout<<str;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k;
		cin>>k>>str;
		Xu_li(k);
		cout<<endl;
	}
	return 0;
}

