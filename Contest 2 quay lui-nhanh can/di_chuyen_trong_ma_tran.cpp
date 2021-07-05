/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int arr[100][100];
bool check[100][100];
vector<string> tong;
void Nhap(int n,int m)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>arr[i][j];
			check[i][j]=false;
		}
	}
}
void Xu_li(int n,int m,int i,int j,string str)
{
	for(int k=1;k<=n;k++)
	{
		for(int q=1;q<=m;q++)
		{
			arr[k][q]=1;
		}
	}
	if(i==n&&j==m) tong.push_back(str);
	if(i<n&&arr[i+1][j]==1&&check[i+1][j]==0)
	{
		check[i+1][j]=1;
		Xu_li(n,m,i+1,j,str+"D");
		check[i+1][j]=0;
	}
	if(j<m&&arr[i][j+1]==1&&check[i][j+1]==0)
	{
		check[i][j+1]=1;
		Xu_li(n,m,i,j+1,str+"R");
		check[i][j+1]=0;
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		tong.clear();
		Nhap(n,m);
		Xu_li(n,m,1,1,"");
		int dem=0;
		for(int i=0;i<tong.size();i++)
		{
			dem++;
		}
		cout<<dem;
		cout<<endl;
	}
	return 0;
}

