/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
long long arr[1000000];
long long brr[1000000];
void Nhap(long long arr[],long long n)
{
	for(long long i=0;i<n;i++)
	{
		cin>>arr[i];
	}
}
void Sap_xep(long long arr[],long long n)
{
	for(long long i=0;i<n;i++)
	{
		for(long long j=i+1;j<n;j++)
		{
			if(arr[i]<arr[j]) swap(arr[i],arr[j]);
		}
	}
}
void Xu_li(long long n)
{
	sort(arr,arr+n);
	Sap_xep(brr,n);
	long long tong=0;
	for(long long i=0;i<n;i++)
	{
		//tong=0;
		//for(long long i=0;i<n;i++)
		{
			tong+=arr[i]*brr[i];
		}
	}
	cout<<tong;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Nhap(arr,n);
		Nhap(brr,n);
		Xu_li(n);
		cout<<endl;
	}
	return 0;
}

