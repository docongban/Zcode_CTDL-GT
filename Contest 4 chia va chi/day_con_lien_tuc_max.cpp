/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int arr[1000000];
void Nhap(int n)
{
	for(int i=0;i<n;i++) cin>>arr[i];
}
int Xu_li(int n)
{
	long long tong=0,end=0;
	int x=-1000000;
	bool test=true;
	for(int i=0;i<n;i++)
	{
		if(arr[i]>=0) test=0;
		else x=max(x,arr[i]);
		tong+=arr[i];
		if(tong<0) tong=0;
		if(tong>end) end=tong;
	}
	if(test) return x;
	return end;
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
		cout<<Xu_li(n)<<endl;
	}
	return 0;
}

