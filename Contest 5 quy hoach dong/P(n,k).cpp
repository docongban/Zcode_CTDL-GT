/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
long long modulo=1e9+7;
void Xu_li(int n,int k)
{
	long long kq=1;
	if(k>n) cout<<0;
	else
	{
		for(int i=n-k+1;i<=n;i++)
		{
			kq=(kq*i)%modulo;
		}
		cout<<kq;
	}
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

