/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int arr[1000];
int brr[1000];
void Nhap(int arr[],int n)
{
	for(int i=1;i<=n;i++) cin>>arr[i];
}
void Xu_li(int n,int k)
{
	//i=k->1 arr[i]!=n-k+i ->arr[i]+=1 arr[j]=arr[j-1]+1 (i<j<=k)
	int i=k;
	while(i>0&&arr[i]==n-k+i) i-=1;
	if(i>0)
	{
		arr[i]+=1;
		for(int j=i+1;j<=k;j++)
		{
			arr[j]=arr[j-1]+1;
			//arr[j]=arr[i]+j-i;
		}
		for(int i=1;i<=k;i++) cout<<arr[i]<<" ";
	}
	else 
	{
		for(int i=1;i<=k;i++) cout<<i<<" ";
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
		Nhap(arr,k);
		Xu_li(n,k);
		cout<<endl;
	}
	return 0;
}

