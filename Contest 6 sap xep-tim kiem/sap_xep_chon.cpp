/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int arr[100];
void Nhap(int arr[],int n)
{
	for(int i=0;i<n;i++) cin>>arr[i];
}
void Xuat(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
void Xu_li(int arr[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		int Min=i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[Min]>arr[j])
			{
				Min=j;
			}
		}
		swap(arr[Min],arr[i]);
		cout<<"Buoc "<<i+1<<": ";
		Xuat(arr,n);
	}
}
int main()
{
	int n;
	cin>>n;
	Nhap(arr,n);
	Xu_li(arr,n);
	return 0;
}

