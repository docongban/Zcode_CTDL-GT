/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
void Xu_li(int n,int s,int m)
{
	//s-s/7 so ngay co the mua duoc tru di chu nhat
	if(s*m>n*(s-s/7)) cout<<-1;
	else
	{
		for(int i=1;i<=s-s/7;i++)
		{
			if(m*s<=n*i)
			{
				cout<<i;
				break;
			}
		}
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,s,m;
		cin>>n>>s>>m;
		Xu_li(n,s,m);
		cout<<endl;
	}
	return 0;
}

