/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
long long arr[100005];
void Nhap(long long n)
{
	for(long long i=1;i<=n;i++) cin>>arr[i];
}
void Xu_li(long long n)
{
	long long tam[100005]={0};
	tam[1]=arr[1];
	tam[2]=max(arr[1],arr[2]);
	for(long long i=3;i<=n;i++)
	{
		tam[i]=max(tam[i-1],tam[i-2]+arr[i]);
	}
	cout<<tam[n];
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

