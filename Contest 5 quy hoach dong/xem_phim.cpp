/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int tam[105][25005];
int arr[105];
void Nhap(int n)
{
	for(int i=1;i<=n;i++) cin>>arr[i];
}
void Xu_li(int n,int c)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=c;j++)
		{
			if(j>=arr[i]) tam[i][j]=max(tam[i-1][j],tam[i-1][j-arr[i]]+arr[i]);
			else tam[i][j]=tam[i-1][j];
		}
	}
	cout<<tam[n][c];
}
int main()
{
	int c,n;
	cin>>c>>n;
	Nhap(n);
	Xu_li(n,c);
	cout<<endl;
	return 0;
}

