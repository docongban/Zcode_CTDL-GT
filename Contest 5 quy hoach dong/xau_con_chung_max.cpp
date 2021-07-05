/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int arr[1000][1000];
string str1,str2;
void Xu_li()
{
	int dem=0;
	for(int i=1;i<=str1.size();i++)
	{
		for(int j=1;j<=str2.size();j++)
		{
			if(str1[i-1]==str2[j-1]) arr[i][j]=arr[i-1][j-1]+1;
			else arr[i][j]=max(arr[i][j-1],arr[i-1][j]);
			dem=max(dem,arr[i][j]);
		}
	}
	cout<<dem;
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
