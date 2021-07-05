/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
string str[100000];
void Gray(int n)
{
	int k=1;
	for(int i=1;i<=n;i++) k*=2;
	str[1]="0";
	str[2]="1";
	if(n>1)
	{
		int t=2;//lay doi xung
		for(int i=2;i<=n;i++)
		{
			int x=1;
			for(int j=1;j<=i;j++) x*=2;
			for(int j=1;j<=t;j++)
			{
				str[x-j+1]="1"+str[j];
				str[j]="0"+str[j];
			}
			t=x;
		}
	}
	for(int i=1;i<=k;i++) cout<<str[i]<<" ";
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		Gray(n);
		cout<<endl;
	}
	return 0;
}

