/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int arr[20];
int test[20]={0};
void Xuat(int arr[],int n)
{
	for(int i=1;i<=n;i++) 
	{
		cout<<arr[i];
	}
	cout<<" ";
}
void Hoan_vi(int n,int k)
{
	for(int i=1;i<=n;i++)
	{
		if(test[i]==0)
		{
			arr[k]=i;
			test[i]=1;
			if(n==k) Xuat(arr,k);
			else Hoan_vi(n,k+1);
			test[i]=0;
		}
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
		Hoan_vi(n,1);
		cout<<endl;
	}
	return 0;
}

