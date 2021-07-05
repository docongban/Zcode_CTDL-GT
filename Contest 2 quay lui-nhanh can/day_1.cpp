/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int arr[100][100];
void Nhap(int n)
{
	for(int i=1;i<=n;i++)
	{
		cin>>arr[1][i];
	}
}
void Xu_li(int n)
{
	int cot=n-1;
	for(int i=2;i<=n;i++)
	{
		for(int j=1;j<=cot;j++) 
		{
			arr[i][j]=arr[i-1][j]+arr[i-1][j+1];
		}
		cot--;
	}
	cot=n;
	for(int i=1;i<=n;i++)
	{
		cout<<"[";
		for(int j=1;j<=cot-1;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<arr[i][cot]<<"]";
		cot--;
		cout<<endl;
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
		Nhap(n);
		Xu_li(n);
		cout<<endl;
	}
	return 0;
}

