/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
bool hang[100],cot[100];
bool a1[100],a2[100];
int arr[100];
int x[100][100];
int kq=0;
void Nhap()
{
	for(int i=1;i<=8;i++)
	{
		for(int j=1;j<=8;j++)
		{
			cin>>x[i][j];
		}
	}
	for(int i=0;i<100;i++) hang[i]=cot[i]=0;
	for(int i=0;i<100;i++) a1[i]=a2[i]=0;
}
void Xu_li(int i)
{
	for(int j=1;j<=8;j++)
	{
		if(hang[j]==0&&cot[j]==0&&a1[i+j-1]==0&&a2[i-j+8]==0)
		{
			arr[i]=j;
			hang[j]=cot[j]=a1[i+j-1]=a2[i-j+8]=1;
			if(i==8)
			{
				int tong=0;
				for(int k=1;k<=8;k++)
				{
					tong+=x[k][arr[k]];
				}
				kq=max(kq,tong);
			}
			else Xu_li(i+1);
			hang[j]=cot[j]=a1[i+j-1]=a2[i-j+8]=0;
		}
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		Nhap();
		kq=0;
		Xu_li(1);
		cout<<kq<<endl;
	}
	return 0;
}
