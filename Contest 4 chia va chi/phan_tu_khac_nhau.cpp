/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
long long arr[1000000];
long long brr[1000000];
void Nhap(long long arr[],long long n)
{
	for(long long i=0;i<n;i++) cin>>arr[i];
}
void Xu_li(long long n)
{
	long long x=0;
	for(long long i=0;i<n-1;i++)
	{
		if(arr[i]!=brr[i])
		{
			x=i;
			break;
		}
	}
	cout<<x+1;
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
		Nhap(brr,n-1);
		Xu_li(n);
		cout<<endl;
	}
	return 0;
}

