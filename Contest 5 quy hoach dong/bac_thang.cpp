/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
long long modulo=1e9+7;
void Xu_li(int n,int k)
{
	long long tam[100000+5]={0};
	tam[0]=tam[1]=1;
	for(int i=2;i<=n;i++)
	{
		for(int j=1;j<=min(i,k);j++)
		{
			tam[i]+=tam[i-j];
			tam[i]%=modulo;
		}
	}
	cout<<tam[n];
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		Xu_li(n,k);
		cout<<endl;
	}
	return 0;
}

