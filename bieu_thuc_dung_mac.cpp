#include<bits/stdc++.h>
using namespace std;
string str;
void Handle()
{
	stack<char> stk;
	int count=0;
	for(int i=0;i<str.size();i++)
	{
		if(str[i]=='(') stk.push(str[i]);
		else if(str[i]==')'&&!stk.empty())
		{
			stk.pop();
			count+=2;
		}
	}
	cout<<count;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>str;
		Handle();
		cout<<endl;
	}
	return 0;
}

