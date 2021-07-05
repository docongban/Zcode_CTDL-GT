/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int arr[200];
void Nhap(int n)
{
	for(int i=1;i<=n;i++) cin>>arr[i];
}
void Xu_li(int n,int s)
{
	int tam[40000]={0};
	tam[0]=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=s;j>=arr[i];j--)
		{
			if(tam[j-arr[i]]==1) tam[j]=1;
		}
	}
	if(tam[s]) cout<<"YES";
	else cout<<"NO";
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,s;
		cin>>n>>s;
		Nhap(n);
		Xu_li(n,s);
		cout<<endl;
	}
	return 0;
}
