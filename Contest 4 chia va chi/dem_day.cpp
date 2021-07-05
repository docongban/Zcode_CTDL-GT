/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
long long modulo=123456789;
long long Mu(long long n)
{
	if(n==0) return 1%modulo;
	if(n==1) return 2%modulo;
	long long tam=Mu(n/2);
	if(n%2!=0) return 2*((tam*tam)%modulo)%modulo;
	return (tam%modulo*tam%modulo)%modulo;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		cout<<Mu(n-1);
		cout<<endl;
	}
	return 0;
}

