/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
string str1,str2;
void Xu_li()
{
	long long a=0,p=1;
	for(int i=str1.size()-1;i>=0;i--)
	{
		a+=(str1[i]-'0')*p;
		p*=2;
	}
	long long b=0;
	p=1;
	for(int i=str2.size()-1;i>=0;i--)
	{
		b+=(str2[i]-'0')*p;
		p*=2;
	}
	cout<<a*b;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>str1>>str2;
		Xu_li();
		cout<<endl;
	}
	return 0;
}

