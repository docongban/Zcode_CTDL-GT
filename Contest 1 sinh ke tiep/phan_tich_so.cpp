/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int arr[100],k;
bool test;
void Xuat(int k)
{
	for(int i=1;i<=k;i++) 
	{
		if(i==1) cout<<"(";
		cout<<arr[i];
		if(i==k) cout<<")";
		if(i<k) cout<<" ";
	}
	cout<<" ";
}
void Xu_li(int n)
{
	int i=k;
	while(i>0&&arr[i]==1) i--;
	if(i<=0) test=true;
	else
	{
		arr[i]-=1;
		int D=k-i+1;
		k=i;
		for(int j=i+1;j<=i+D/arr[i];j++)
		{
			arr[j]=arr[i];
		}
		k+=D/arr[i];
		if(D%arr[i])
		{
			arr[++k]=D%arr[i];
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
		k=1;
		arr[k]=n;
		test=false;
		while(test==0)
		{
			Xuat(k);
			Xu_li(n);
		}
		cout<<endl;
	}
	return 0;
}

