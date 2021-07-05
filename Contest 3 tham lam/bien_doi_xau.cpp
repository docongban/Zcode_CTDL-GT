/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
string str1,str2;
void Xu_li()
{
	long long tam[105][105];
	for(int i=0;i<=str1.size();i++)
	{
		for(int j=0;j<=str2.size();j++)
		{
			if(i==0) tam[0][j]=j;//chen j ki tu
			else if(j==0) tam[i][0]=i;//xoa i ki tu
			else if(str1[i-1]==str2[j-1]) tam[i][j]=tam[i-1][j-1];
			else tam[i][j]=min(tam[i-1][j-1],min(tam[i][j-1],tam[i-1][j]))+1;
		}
	}
	cout<<tam[str1.size()][str2.size()];
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>str1>>str2;
		Xu_li();
		cout<<endl;
	}
	return 0;
}

