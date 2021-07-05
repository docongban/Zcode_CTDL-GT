/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int arr[100];
int brr[100];
void Nhap(int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		brr[i]=arr[i];
	}
}
void Xu_li(int n)
{
	bool test=true;
	sort(brr,brr+n);
	for(int i=0;i<n;i++)
	{
		if(arr[i]!=brr[i]&&arr[i]!=brr[n-i-1])
		{
			test=false;
			break;
		}
	}
	if(test==true) cout<<"Yes";
	else cout<<"No";
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
