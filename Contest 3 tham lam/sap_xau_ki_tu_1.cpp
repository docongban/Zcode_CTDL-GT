/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
string str;
void Xu_li()
{
	int n=str.size();
	int dem[1000]={0},Max=0;
	for(int i=0;i<n;i++)
	{
		dem[str[i]]++;
		if(Max<dem[str[i]]) Max=dem[str[i]];
	}
	if(n%2==0&&Max<=n-Max) cout<<1;
	else if(n%2!=0&&Max<=n/2+1) cout<<1;
	else cout<<-1;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>str;
		Xu_li();
		cout<<endl;
	}
	return 0;
}
