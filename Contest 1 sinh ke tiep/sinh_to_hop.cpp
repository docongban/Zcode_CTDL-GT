/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int arr[20];
void Xuat(int arr[],int n)
{
	for(int i=1;i<=n;i++)
	{
		cout<<arr[i];
	}
	cout<<" ";
}
void To_hop(int n,int k,int i)
{
	for(int j=arr[i-1]+1;j<=n-k+i;j++)
	{
		arr[i]=j;
		if(i==k) Xuat(arr,k);
		else To_hop(n,k,i+1);
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		To_hop(n,k,1);
		cout<<endl;
	}
	return 0;
}

