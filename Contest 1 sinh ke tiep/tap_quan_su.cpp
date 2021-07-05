/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int arr[100];
		int check[100]={0};
		for(int i=1;i<=k;i++)
		{
			cin>>arr[i];
			check[arr[i]]=1;
		}
		int i=k;
		while(i>0&&arr[i]==n-k+i) i--;
		if(i<=0) cout<<k;
		else
		{
			arr[i]+=1;
			for(int j=i+1;j<=k;j++) arr[j]=arr[j-1]+1;
			for(int j=1;j<=k;j++)  check[arr[j]]=0;
			int dem=0;
			for(int j=1;j<=40;j++) 
			{
				if(check[j]) dem++;
			}
			cout<<dem;
		}
		cout<<endl;
	}
	return 0;
}
