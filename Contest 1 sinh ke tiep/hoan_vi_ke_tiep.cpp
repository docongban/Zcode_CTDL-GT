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
void Xu_li(int arr[],int n)
{
	//i=n-1 ->1 arr[i]<arr[i+1] j=n ->i+1 =>min(arr[j])>arr[i] swap(arr[j],arr[i]) i+1 ->n swap(arr[i+1]),arr[n])
	int i=n-1;
	while(i>0&&arr[i]>arr[i+1]) i-=1;
	if(i>0)
	{
		int k=n;
		while(arr[k]<arr[i]) k--;
		swap(arr[k],arr[i]);
		int l=i+1,r=n;
		while(l<r)
		{
			swap(arr[l],arr[r]);
			l++;
			r--;
		}
		for(int i=1;i<=n;i++)
		{
			cout<<arr[i]<<" ";
		}
	}
	else
	{
		for(int i=1;i<=n;i++) cout<<i<<" ";
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
		Nhap(arr,n);
		Xu_li(arr,n);
		cout<<endl;
	}
	return 0;
}

