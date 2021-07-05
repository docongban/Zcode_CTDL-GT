/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
long long arr[100000];
long long Chuyen_5(long long n)
{
	long long t=0;
	long long dem=0;
	int tam=n;
	while(n>0)
	{
		arr[t]=n%10;
		dem++;
		n/=10;
		t++;
	}
	n=tam;
	for(long long i=0;i<t;i++)
	{
		if(arr[i]==6)
		{
			arr[i]=5;
		}
	}
	long long tong=0;
	for(long long i=t-1;i>=0;i--)
	{
		tong+=arr[i]*pow(10,dem-1);
		dem--;
	}
	return tong;
}
long long Chuyen_6(long long n)
{
	long long t=0;
	long long dem=0;
	int tam=n;
	while(n>0)
	{
		arr[t]=n%10;
		dem++;
		n/=10;
		t++;
	}
	n=tam;
	for(long long i=0;i<t;i++)
	{
		if(arr[i]==5)
		{
			arr[i]=6;
		}
	}
	long long tong=0;
	for(long long i=t-1;i>=0;i--)
	{
		tong+=arr[i]*pow(10,dem-1);
		dem--;
	}
	return tong;
}
int main()
{
	long long a,b,a1,b1;
	cin>>a>>b;
	a1=a;b1=b;
	cout<<Chuyen_5(a)+Chuyen_5(b)<<" "<<Chuyen_6(a1)+Chuyen_6(b1);
	cout<<endl;
	return 0;
}

