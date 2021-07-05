/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
long long arr[1000000];
long long brr[1000000];
long long crr[1000000];
void Nhap(long long arr[],long long n)
{
	for(long long i=0;i<n;i++) cin>>arr[i];
}
void Xu_li(long long arr[],long long brr[],long long n,long long m,long long k)
{
	for(long long i=0;i<m+n;i++)
	{
		if(i<n) crr[i]=arr[i];
		else crr[i]=brr[i-n];
	}
	sort(crr,crr+m+n);
	cout<<crr[k-1];
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long m,n,k;
		cin>>m>>n>>k;
		Nhap(arr,n);
		Nhap(brr,m);
		Xu_li(arr,brr,n,m,k);
		cout<<endl;
	}
	return 0;
}

