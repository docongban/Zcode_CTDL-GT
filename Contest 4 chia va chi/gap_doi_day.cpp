/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
long long Mu_2(int n)
{
	if(n==0) return 1;
	if(n==1) return 2;
	long long tam=Mu_2(n/2);
	if(n%2!=0) return tam*tam*2;
	return tam*tam;
}
void Xu_li(int n,long long k)
{
	long long l=Mu_2(n)/2;
	while(true)
	{
		if(n==1)
		{
			cout<<1;
			break;
		}
		if(l==k)
		{
			cout<<n;
			break;
		}
		if(k>l)
		{
			k=l-(k-l);
		}
		n--;
		l/=2;
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		long long k;
		cin>>n>>k;
		Xu_li(n,k);
		cout<<endl;
	}
	return 0;
}

