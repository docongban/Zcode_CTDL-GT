/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
string str;
void Xu_li(int k)
{
	int dem[10000]={0};
	int n=str.size(),Max=0;
	for(int i=0;i<n;i++)
	{
		dem[str[i]]++;
		if(Max<dem[str[i]]) Max=dem[str[i]];
	}
	if((Max-1)*(k-1)>n-Max) cout<<-1;
	else cout<<1;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k;
		cin>>k>>str;
		Xu_li(k);
		cout<<endl;
	}
	return 0;
}

