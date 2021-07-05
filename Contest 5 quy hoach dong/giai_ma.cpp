/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
string str;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>str;
		if(str[0]=='0')
		{
			cout<<0<<endl;
			continue;
		}
		int arr[100]={0};
		int l=str.size();
		arr[0]=arr[1]=1;
		for(int i=2;i<=l;i++)
		{
			if(str[i-1]>'0') arr[i]=arr[i-1];
			if(str[i-2]=='1'||(str[i-2]=='2'&&str[i-1]<='6')) arr[i]+=arr[i-2];
		}
		cout<<arr[l];
		cout<<endl;
	}
	return 0;
}
