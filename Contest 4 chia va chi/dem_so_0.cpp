/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int arr[10000];
void Nhap(int n)
{
	for(int i=0;i<n;i++) cin>>arr[i];
}
void Xu_li(int n)
{
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==0) dem++;
	}
	cout<<dem;
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

