/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int arr[105];
int tang[100],giam[105];
void Nhap(int n)
{
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
		tang[i]=arr[i];
		giam[i]=arr[i];
	}
}
void Xu_li(int n)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<i;j++)
		{
			if(arr[i]>arr[j])
			{
				tang[i]=max(tang[i],tang[j]+arr[i]);
			}
		}
	}
	
	for(int i=n;i>=1;i--)
	{
		for(int j=n;j>i;j--)
		{
			if(arr[i]>arr[j]) giam[i]=max(giam[i],giam[j]+arr[i]);
		}
	}
	int kq=0;
	for(int i=1;i<=n;i++)
	{
		kq=max(kq,giam[i]+tang[i]-arr[i]);
	}
	cout<<kq;
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

