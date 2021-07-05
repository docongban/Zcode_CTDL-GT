/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int test[100]={0};
int arr[100];
vector< vector<int> > tmp;
void Handle(int n,int i)
{
	for(int j=1;j<=n;j++)
	{
		if(test[j]==0)
		{
			arr[i]=j;
			test[j]=1;
			if(i==n)
			{
				vector<int> v;
				for(int k=1;k<=n;k++) v.push_back(arr[k]);
				tmp.push_back(v);
			}
			else Handle(n,i+1);
			test[j]=0;
		}
	}
}
void Xuat()
{
	for(int i=tmp.size()-1;i>=0;i--)
	{
		for(int j=0;j<tmp[i].size();j++)
		{
			cout<<tmp[i][j];
		}
		cout<<" ";
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		tmp.clear();
		Handle(n,1);
		Xuat();
		cout<<endl;
	}
	return 0;
}
