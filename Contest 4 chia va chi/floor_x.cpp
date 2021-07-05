/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
long long arr[1000000];
void Nhap(long long n)
{
	for(long long i=1;i<=n;i++) cin>>arr[i];
}
void Xu_li(long long n,long long x)
{
	long long k=0;
	for(long long i=n;i>0;i--)
	{
		if(arr[i]<=x)
		{
			k=i;
			break;
		}
	}
	if(k==0) cout<<-1;
	else cout<<k;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,x;
		cin>>n>>x;
		Nhap(n);
		Xu_li(n,x);
		cout<<endl;
	}
	return 0;
}

