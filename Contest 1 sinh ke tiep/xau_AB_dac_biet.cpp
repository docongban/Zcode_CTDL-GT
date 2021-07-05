/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int arr[100];
string str;
vector<string> tong;
void Xu_li(int n,int k,int i)
{
	for(int j=0;j<=1;j++)
	{
		arr[i]=j;
		if(i==n-k)
		{
			for(int x=1;x<=n-k;x++)
			{
				if(x==1&&arr[x]==1)
				{
					string tam=str;
					for(int y=1;y<=n-k;y++)
					{
						if(arr[y]==1) tam+="B";
						else tam+="A";
					}
					tong.push_back(tam);
				}
				if(x==n-k&&arr[x]==1)
				{
					string tam="";
					for(int y=1;y<=n-k;y++)
					{
						if(arr[y]==1) tam+="B";
						else tam+="A";
					}
					tam+=str;
					tong.push_back(tam);
				}
				if(x>1&&arr[x]==1&&arr[x-1]==1)
				{
					string tam="";
					for(int y=1;y<=n-k;y++)
					{
						if(y==x) tam+=str;
						if(arr[y]==1) tam+="B";
						else tam+="A";
					}
					tong.push_back(tam);
				}
			}
		}
		else Xu_li(n,k,i+1);
	}
}
void Xuat(int n,int k)
{
	for(int i=0;i<k;i++) str+="A";
	Xu_li(n,k,1);
	sort(tong.begin(),tong.end());
	cout<<tong.size()<<endl;
	for(int i=0;i<tong.size();i++) cout<<tong[i]<<endl;
}
int main()
{
	int n,k;
	cin>>n>>k;
	Xuat(n,k);
	cout<<endl;
	return 0;
}

