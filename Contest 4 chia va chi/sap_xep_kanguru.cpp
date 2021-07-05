/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int arr[100000];
void Nhap(int n)
{
	for(int i=0;i<n;i++) cin>>arr[i];
}
void Xu_li(int n)
{
	sort(arr,arr+n);
	int dem=n;
	for(int i=n/2-1,j=n-1;i>=0&&j>=n/2;)
	{
		if(arr[j]>=2*arr[i])
		{
			dem--;
			i--;
			j--;
		}
		else i--;
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

