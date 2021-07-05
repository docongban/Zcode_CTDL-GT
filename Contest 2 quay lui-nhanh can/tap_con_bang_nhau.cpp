/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int arr[100];
void Nhap(int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
}
void Xu_li(int n)
{
	int tong=0;
	for(int i=0;i<n;i++) tong+=arr[i];
	if(tong%2==1) cout<<"NO";
	else
	{
		int x=tong/2;
		int 
		dp[x+1]={0};
		dp[0]=1;
		for(int i=0;i<n;i++)
		{
			for(int j=x;j>=arr[i];j--)
			{
				if(dp[j-arr[i]]==1) dp[j]=1;
			}
		}
		if(dp[x]==1) cout<<"YES";
		else cout<<"NO";
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
		Nhap(n);
		Xu_li(n);
		cout<<endl;
	}
	return 0;
}

