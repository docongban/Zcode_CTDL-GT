/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
void Handle(int s,int d)
{
	stack<int> stk;
	while(s>0)
	{
		d--;
		if(s>9) 
		{
			stk.push(9);
			s-=9;
		}
		else 
		{
			stk.push(s);
			break;
		}
	}
	if(d<0) cout<<-1;
	else
	{
		int du=stk.top(); stk.pop();
		stk.push(du-1);
		while(d>1)
		{
			stk.push(0);
			d--;
		}
		stk.push(1);
		while(stk.size()>0)
		{
			cout<<stk.top(); stk.pop();
		}
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int s,d;
		cin>>s>>d;
		Handle(s,d);
		cout<<endl;
	}
	return 0;
}

