/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int tam[1005][1005];
int arr[1005];
int gt[1005];
void Nhap(int n)
{
	for(int i=1;i<=n;i++) cin>>arr[i];
	for(int i=1;i<=n;i++) cin>>gt[i];
}
void Xu_li(int n,int v)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=v;j++)
		{
			if(j>=arr[i]) tam[i][j]=max(tam[i-1][j],tam[i-1][j-arr[i]]+gt[i]);
			else tam[i][j]=tam[i-1][j];
		}
	}
	cout<<tam[n][v];
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,v;
		cin>>n>>v;
		Nhap(n);
		Xu_li(n,v);
		cout<<endl;
	}
	return 0;
}

