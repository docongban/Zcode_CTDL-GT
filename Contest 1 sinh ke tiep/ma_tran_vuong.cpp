/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int arr[100][100];
bool test[100];
int brr[100];
vector<int> tong;
void Nhap(int arr[100][100],int n)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>arr[i][j];
		}
	}
}
void Xu_li(int n,int x,int i)
{
	for(int j=1;j<=n;j++)
	{
		if(test[j]==0)
		{
			brr[i]=j;
			test[j]=1;
			if(i==n)
			{
				int dem=0;
				for(int k=1;k<=n;k++) dem+=arr[k][brr[k]];
				if(dem==x)
				{
					for(int k=1;k<=n;k++) tong.push_back(brr[k]);
				}
			}
			else Xu_li(n,x,i+1);
			test[j]=0;
		}
	}
}
int main()
{
	int n,k;
	cin>>n>>k;
	Nhap(arr,n);
	Xu_li(n,k,1);
	cout<<tong.size()/n;
	for(int i=0;i<tong.size();i++)
	{
		if(i%n==0) cout<<endl;
		cout<<tong[i]<<" ";
	}
	return 0;
}

