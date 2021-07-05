/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int arr[20];
void Xu_li(int n,int k,int i)
{
	for(int j=0;j<=1;j++)
	{
		arr[i]=j;
		if(i==n)
		{
			int dem=0;
			for(int t=1;t<=n;t++)
			{
				if(arr[t]==1) dem++;
			}
			if(dem==k)
			{
				for(int t=1;t<=n;t++) cout<<arr[t];
				cout<<endl;
			}
		}
		else Xu_li(n,k,i+1);
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		Xu_li(n,k,1);
		cout<<endl;
	}
	return 0;
}

