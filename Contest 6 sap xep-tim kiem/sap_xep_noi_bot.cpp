/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int arr[100];
int brr[100];
void Nhap(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
}
void Xuat(int arr[],int n)
{
	for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}
void Xu_li(int arr[],int n)
{
	for(int i=0;i<n;i++) brr[i]=arr[i];
	sort(brr,brr+n);
	for(int i=0;i<n;i++)
	{
		bool test=false;//Kiem tra mang arr da dc sap xep chua
		for(int j=0;j<n;j++)
		{
			if(arr[j]!=brr[j])
			{
				test=true;
				break;
			}
		}
		if(!test) break;
		
		for(int j=0;j<n-1;j++)
		{
			if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
		}
		cout<<"Buoc "<<i+1<<": ";
		Xuat(arr,n);
		cout<<endl;
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

