/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
long long modulo=1e9+7;

//a*5=a*2+a*2+a
long long Nhan(long long a,long long b)
{
	if(b==0) return 0;
	if(b==1) return a%modulo;
	long long tam=Nhan(a,b/2);
	if(b%2!=0) return (tam*2+a)%modulo;
	return tam*2%modulo;
}
//n^5=n^2*n^2*n
long long Mu(long long n,long long k)
{
	if(k==0) return 1;
	if(k==1) return n%modulo;
	long long tam=Mu(n,k/2);
	long long x=Nhan(tam,tam);
	if(k%2!=0) return x*n%modulo;
	return x%modulo;
}
long long Mu_1(long long n,long long k)
{
	if(k==1) return n%modulo;
	long long tam=Mu(n,k/2);
	if(k%2==0) return tam*tam%modulo;
	return (tam*tam%modulo)*n%modulo;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,k;
		cin>>n>>k;
		cout<<Mu_1(n,k);
		cout<<endl;
	}
	return 0;
}

