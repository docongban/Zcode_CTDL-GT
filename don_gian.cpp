#include<bits/stdc++.h>
using namespace std;
vector<int> ke[1005];
bool check[1005];
string str;
int arr[1005][1005];
int main()
{
	int n;
	cin>>n;
	cin.ignore();
	for(int i=1;i<=n;i++)
	{
		getline(cin,str);
		str+=" ";
		int x=0;
		for(int j=0;j<str.size();j++)
		{
			if(str[j]>='0'&&str[j]<='9') x=x*10+(int)(str[j]-'0');
			else if(x>0)
			{
				ke[i].push_back(x);
				x=0;
			}
		}
	}
	for(int i=0;i<n;i++) sort(ke[i].begin(),ke[i].end());
	memset(arr,0,sizeof(arr));
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<ke[i].size();j++)
		{
			arr[i][ke[i][j]]=1;
			arr[ke[i][j]][i]=1;
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

