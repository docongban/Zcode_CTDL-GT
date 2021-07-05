/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
string str;
bool test[100];
int arr[100];
void Xu_li(int i)
{
	for(int j=0;j<str.size();j++)
	{
		if(test[j]==0)
		{
			arr[i]=j;
			test[j]=1;
			if(i==str.size())
			{
				for(int k=1;k<=str.size();k++)
				{
					cout<<str[arr[k]];
				}
				cout<<" ";
			}
			else Xu_li(i+1);
			test[j]=0;
		}
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>str;
		Xu_li(1);
		cout<<endl;
	}
	return 0;
}

