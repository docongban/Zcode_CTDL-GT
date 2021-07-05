/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int tam[105]={0};
void Xu_li(int n,int ins,int del,int cop)
{
	tam[0]=0;
	tam[1]=ins;
	for(int i=2;i<=n;i++)
	{
		if(i%2!=0) tam[i]=min(tam[i-1]+ins,tam[(i+1)/2]+cop+del);
		else tam[i]=min(tam[i-1]+ins,tam[(i)/2]+cop);
	}
	cout<<tam[n];
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,ins,del,cop;
		cin>>n>>ins>>del>>cop;
		Xu_li(n,ins,del,cop);
		cout<<endl;
	}
	return 0;
}

