/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
string str;
void XU_li()
{
	int n=str.size();
	int dem=1;
	//aba
	for(int i=0;i<n;i++)
	{
		int t=i,p=i;
		while(t>=0&&p<n)
		{
			if(str[t]==str[p])
			{
				dem=max(dem,p-t+1);
				t--;p++;
			}
			else break;
		}
	}
	
	//aaaa
	for(int i=0;i<n-1;i++)
	{
		int t=i,p=i+1;
		while(t>=0&&p<n)
		{
			if(str[t]==str[p])
			{
				dem=max(dem,p-t+1);
				t--;p++;
			}
			else break;
		}
	}
	cout<<dem;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>str;
		XU_li();
		cout<<endl;
	}
	return 0;
}

