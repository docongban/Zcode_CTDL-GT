/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
void Xu_li(int n)
{
	long long tam[100]={0};
	tam[0]=tam[1]=1;
	for(int i=2;i<=n;i++)
	{
		for(int j=1;j<=min(i,3);j++)
		{
			tam[i]+=tam[i-j];
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
		int n;
		cin>>n;
		Xu_li(n);
		cout<<endl;
	}
	return 0;
}

