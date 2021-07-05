/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int arr[15];
void Xu_li(int n,int i)
{
	for(int j=0;j<=1;j++)
	{
		arr[i]=j;
		if(i==n)
		{
			for(int k=1;k<=n;k++)
			{
				if(arr[k]==0) cout<<'A';
				else cout<<'B';
			}
			cout<<" ";
		}
		else Xu_li(n,i+1);
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
		Xu_li(n,1);
		cout<<endl;
	}
	return 0;
}

