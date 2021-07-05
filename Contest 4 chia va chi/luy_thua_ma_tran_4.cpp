/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
long long arr[20][20],brr[20][20];
long long modulo=1e9+7;
void Nhap(long long arr[20][20],long long n)
{
	for(long long i=0;i<n;i++)
	{
		for(long long j=0;j<n;j++)
		{
			cin>>arr[i][j];
			brr[i][j]=arr[i][j];
		}
	}
}
void Nhan(long long arr[20][20],long long brr[20][20],long long n)
{
	long long tam[20][20];
	for(long long i=0;i<n;i++)
	{
		for(long long j=0;j<n;j++)
		{
			long long tong=0;
			for(long long k=0;k<n;k++)
			{
				tong+=(arr[i][k]*brr[k][j])%modulo;
				tong%=modulo;
			}
			tam[i][j]=tong;
		}
	}
	for(long long i=0;i<n;i++)
	{
		for(long long j=0;j<n;j++) arr[i][j]=tam[i][j];
	}
}
void Mu(long long arr[20][20],long long n,long long k)
{
	if(k==1) return;
	Mu(arr,n,k/2);
	Nhan(arr,arr,n);
	if(k%2==1) Nhan(arr,brr,n);
}
void Xu_li(long long arr[20][20],long long n,long long k)
{
	Mu(arr,n,k);
	long long tong=0;
	for(long long i=0;i<n;i++)
	{
		tong+=(arr[0][i])%modulo;
		tong%=modulo;
	}
	cout<<tong;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,k;
		cin>>n>>k;
		Nhap(arr,n);
		Xu_li(arr,n,k);
		cout<<endl;
	}
	return 0;
}

