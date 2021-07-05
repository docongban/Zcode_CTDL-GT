/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
void Xu_li(int n)
{
	int tam[10005];
	for(int i=1;i<=n;i++) tam[i]=i;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=sqrt(i);j++)
		{
			tam[i]=min(tam[i],tam[i-j*j]+1);
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

