/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
long long modulo=1e9+7;
long long f[2][2];
long long le[2][2];
void Nhan(long long f1[2][2],long long f2[2][2])
{
	long long x=(f1[0][0]*f2[0][0]%modulo+f1[0][1]*f2[1][0]%modulo)%modulo;
	long long y=(f1[0][0]*f2[0][1]%modulo+f1[0][1]*f2[1][1]%modulo)%modulo;
	long long z=(f1[1][0]*f2[0][0]%modulo+f1[1][1]*f2[1][0]%modulo)%modulo;
	long long t=(f1[1][0]*f2[0][1]%modulo+f1[1][1]*f2[1][1]%modulo)%modulo;
	f1[0][0]=x;f1[0][1]=y;f1[1][0]=z;f1[1][1]=t;
}
void Mu(long long f[2][2],long long n)
{
	if(n<=1) return;
	Mu(f,n/2);
	Nhan(f,f);
	if(n%2==1) Nhan(f,le);
}
void Xu_li(long long n)
{
	f[0][0]=f[0][1]=f[1][0]=1;
	f[1][1]=0;
	le[0][0]=le[0][1]=le[1][0]=1;
	le[1][1]=0;
	if(n==0) cout<<0;
	else
	{
		Mu(f,n-1);
		cout<<f[0][0];
	}
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

