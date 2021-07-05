/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
long long modulo=1e9+7;
long long arr[1000000];
long long Mu(long long n,long long k)
{
	if(k==1) return n%modulo;
	long long tam=Mu(n,k/2);
	if(k%2==0) return tam*tam%modulo;
	return (tam*tam%modulo)*n%modulo;
}
void Xu_li(long long n)
{
	long long tam=n;
	long long x=0,dem=0;
	while(n>0)
	{
		arr[x]=n%10;
		dem++;
		n/=10;
		x++;
	}
	n=tam;
	long long tong=0;
	for(long long i=dem-1;i>=0;i--)
	{
		tong+=n%10*pow(10,i);
		n/=10;
	}
	n=tam;
	cout<<Mu(n,tong);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Xu_li(n);
		cout<<endl;
	}
	return 0;
}

