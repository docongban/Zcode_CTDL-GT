/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
long long arr[1000000];
void Nhap(long long n)
{
	for(long long i=0;i<n;i++)
	{
		cin>>arr[i];
	}
}
void Xu_li(long long n)
{
	sort(arr,arr+n);
	long long res=0;
	for(long long i=0;i<n;i++)
	{
		res+=arr[i]*i;
		res%=1000000007;
	}
	cout<<res;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Nhap(n);
		Xu_li(n);
		cout<<endl;
	}
	return 0;
}

