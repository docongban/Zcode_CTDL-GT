/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int arr[100];
void Nhap(int n)
{
	for(int i=0;i<n;i++) cin>>arr[i];
}
void Xu_li(int n,int k)
{
	sort(arr,arr+n);
	long long tong1=0,tong2=0;
	long long hieu1=0,hieu2=0;
	for(int i=0;i<n;i++)
	{
		if(i<k) tong1+=arr[i];
		else tong2+=arr[i];
	}
	hieu1=tong2-tong1;
	long long tong3=0,tong4=0;
	for(int i=0;i<n;i++)
	{
		if(i<n-k) tong3+=arr[i];
		else tong4+=arr[i];
	}
	hieu2=tong4-tong3;
	cout<<max(hieu1,hieu2);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		Nhap(n);
		Xu_li(n,k);
		cout<<endl;
	}
	return 0;
}

