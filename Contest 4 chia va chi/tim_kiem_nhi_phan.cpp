/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
long long arr[1000000];
void Nhap(long long n)
{
	for(long long i=1;i<=n;i++) cin>>arr[i];
}
void Xu_li(long long n,long long k)
{
	long long x=0;
	for(long long i=1;i<=n;i++)
	{
		if(arr[i]==k)
		{
			x=i;
			break;
		}
	}
	if(x==0) cout<<"NO";
	else cout<<x;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,k;
		cin>>n>>k;
		Nhap(n);
		Xu_li(n,k);
		cout<<endl;
	}
	return 0;
}

