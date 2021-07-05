/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int arr[100][100];
void Nhap(int n)
{
	for(int i=1;i<=n;i++) cin>>arr[1][i];
}
void Xu_li(int n)
{
	int cot=n-1;
	for(int i=2;i<=n;i++)
	{
		for(int j=1;j<=cot;j++)
		{
			arr[i][j]=arr[i-1][j]+arr[i-1][j+1];
		}
		cot--;
	}
	cot=n;
	vector< vector<int> > tong;
	for(int i=1;i<=n;i++)
	{
		vector<int> tam;
		for(int j=1;j<=cot;j++)
		{
			tam.push_back(arr[i][j]);
		}
		tong.push_back(tam);
		cot--;
	}
	for(int i=tong.size()-1;i>=0;i--)
	{
		for(int j=0;j<tong[i].size();j++)
		{
			if(j==0) cout<<"[";
			cout<<tong[i][j];
			if(j==tong[i].size()-1) cout<<"]";
			if(j<tong[i].size()-1) cout<<" ";
		}
		cout<<" ";
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
		Xu_li(n);
		cout<<endl;
	}
	return 0;
}

