/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int arr[105][105];
string str;
void Xu_li(int n)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(str[i-1]==str[j-1]&&i!=j) arr[i][j]=arr[i-1][j-1]+1;
			else arr[i][j]=max(arr[i][j-1],arr[i-1][j]); 
		}
	}
	cout<<arr[n][n];
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n>>str;
		Xu_li(n);
		cout<<endl;
	}
	return 0;
}

