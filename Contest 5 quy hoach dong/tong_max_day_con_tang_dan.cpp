/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int arr[1005];
int tam[1005];
void Nhap(int n)
{
	for(int i=1;i<=n;i++) 
	{
		cin>>arr[i];
		tam[i]=arr[i];
	}
}
void Xu_li(int n)
{
	int kq=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<i;j++)
		{
			if(arr[j]<arr[i]) tam[i]=max(tam[i],tam[j]+arr[i]);
		}
		kq=max(kq,tam[i]);
	}
	cout<<kq;
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

