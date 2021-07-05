/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int arr[505][505];
int tam[505][505];
void Nhap(int n,int m)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>arr[i][j];
			tam[i][j]=arr[i][j];
		}
	}
}
void Xu_li(int n,int m)
{
	int dem=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(arr[i][j]==0) continue;
			if(arr[i][j]==arr[i][j-1] && arr[i][j]==arr[i-1][j] && arr[i][j]==arr[i-1][j-1])
			{
				tam[i][j]=min(tam[i-1][j-1],min(tam[i-1][j],tam[i][j-1]))+1;
			}
			dem=max(dem,tam[i][j]);
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
		int n,m;
		cin>>n>>m;
		Nhap(n,m);
		Xu_li(n,m);
		cout<<endl;
	}
	return 0;
}

