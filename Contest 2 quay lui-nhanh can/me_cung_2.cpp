/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int arr[100][100];
bool check[100][100];
vector<string> tong;
void Nhap(int n)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>arr[i][j];
			check[i][j]=false;
		}
	}
}
void Xu_li(int i,int j,int n,string str)
{
	if(arr[1][1]==0) return;
	if(i==n&&j==n&&arr[i][j]==1) tong.push_back(str);
	if(i<n&&arr[i+1][j]==1&&check[i+1][j]==0)
	{
		check[i][j]=true;
		Xu_li(i+1,j,n,str+"D");
		check[i][j]=false;
	}
	if(j<n&&arr[i][j+1]==1&&check[i][j+1]==0)
	{
		check[i][j]=true;
		Xu_li(i,j+1,n,str+"R");
		check[i][j]=false;
	}
	if(i>1&&arr[i][j-1]==1&&check[i][j-1]==0)
	{
		check[i][j]=true;
		Xu_li(i,j-1,n,str+"L");
		check[i][j]=false;
	}
	if(j>1&&arr[i-1][j]==1&&check[i-1][j]==0)
	{
		check[i][j]=true;
		Xu_li(i-1,j,n,str+"U");
		check[i][j]=false;
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		Nhap(n);
		tong.clear();
		Xu_li(1,1,n,"");
		if(tong.size()==0) cout<<-1;
		else
		{
			sort(tong.begin(),tong.end());
			for(int i=0;i<tong.size();i++)
			{
				cout<<tong[i]<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}

