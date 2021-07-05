/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
long long arr[1005][1005];
long long modulo=1e9+7;
void Xu_li(int n,int k)
{
	for(int i=0;i<=1000;i++)
	{
		for(int j=0;j<=i;j++)
		{
			if(j==0||j==i) arr[i][j]=1;
			else arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
			arr[i][j]%=modulo;
		}
	}
	cout<<arr[n][k];
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		Xu_li(n,k);
		cout<<endl;
	}
	return 0;
}

