/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int arr[105][105][105];
string str1,str2,str3;
void Xu_li(int x,int y,int z)
{
	int kq=0;
	for(int i=1;i<=x;i++)
	{
		for(int j=1;j<=y;j++)
		{
			for(int k=1;k<=z;k++)
			{
				if(str1[i-1]==str2[j-1]&&str2[j-1]==str3[k-1]) arr[i][j][k]=arr[i-1][j-1][k-1]+1;
				else arr[i][j][k]=max(arr[i-1][j][k],max(arr[i][j-1][k],arr[i][j][k-1]));
				kq=max(kq,arr[i][j][k]);
			}
		}
	}
	cout<<kq;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,y,z;
		cin>>x>>y>>z>>str1>>str2>>str3;
		Xu_li(x,y,z);
		cout<<endl;
	}
	return 0;
}
