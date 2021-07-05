/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int arr[100];
int brr[100];
vector< vector<int> > tong;
void Nhap(int n)
{
	for(int i=1;i<=n;i++)
	{
		cin>>brr[i];
	}
	sort(brr+1,brr+n+1);
}
void Xu_li(int n,int x,int i)
{
	for(int j=0;j<=1;j++)
	{
		arr[i]=j;
		if(i==n)
		{
			int kq=0;
			for(int k=1;k<=n;k++)
			{
				if(arr[k]==1) kq+=brr[k];
			}
			if(kq==x)
			{
				vector<int> tam;
				for(int k=1;k<=n;k++)
				{
					if(arr[k]==1) tam.push_back(brr[k]);
				}
				tong.push_back(tam);
			}
		}
		else Xu_li(n,x,i+1);
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		tong.clear();
		Nhap(n);
		Xu_li(n,x,1);
		if(tong.size()==0) cout<<-1;
		else
		{
			sort(tong.begin(),tong.end());
			for(int i=0;i<tong.size();i++)
			{
				for(int j=0;j<tong[i].size();j++)
				{
					if(j==0) cout<<"[";
					cout<<tong[i][j];
					if(j==tong[i].size()-1) cout<<"]";
					if(j<tong[i].size()-1) cout<<" ";
				}
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
