/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int arr[100];
void Nhap(int n)
{
	for(int i=0;i<n;i++) cin>>arr[i];
}
/*void Xu_li(int n)
{
	sort(arr,arr+n);
	int a1=0,a2=0;
	int dem1=0,dem2=0;
	if(n%2==0)
	{
		dem1=n/2;
		for(int i=0;i<n;i++)
		{
			if(i%2==0) 
			{
				a1+=arr[i]*pow(10,dem1-1);
				dem1--;
			}
		}
		dem2=n/2;
		for(int i=0;i<n;i++)
		{
			if(i%2!=0)
			{
				a2+=arr[i]*pow(10,dem2-1);
				dem2--;
			}
		}
		cout<<a1+a2;
	}
	else
	{
		dem1=n/2+1;
		for(int i=0;i<n;i++)
		{
			if(i%2==0) 
			{
				a1+=arr[i]*pow(10,dem1-1);
				dem1--;
			}
		}
		dem2=n/2;
		for(int i=0;i<n;i++)
		{
			if(i%2!=0)
			{
				a2+=arr[i]*pow(10,dem2-1);
				dem2--;
			}
		}
		cout<<a1+a2;
	}
}*/
void Xu_li(int n)
{
	vector<int> tong;
	for(int i=0;i<n;i++) if(arr[i]!=0) tong.push_back(arr[i]);
	sort(tong.begin(),tong.end());
	int x1=0,x2=0;
	for(int i=0;i<tong.size();i++)
	{
		if(i%2==0) x1=x1*10+tong[i];
		else x2=x2*10+tong[i];
	}
	int a1=0,a2=0;
	for(int i=0;i<tong.size();i++)
	{
		if(i>=2)
		{
			if(i%2==0) a1=a1*10+tong[i];
			else a2=a2*10+tong[i];
		}
	}
	a2=a2+tong[0]*pow(10,tong.size()/2-1);
	a1=a1+tong[1]*pow(10,tong.size()/2-1);
	cout<<min(a1+a2,x1+x2);
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

