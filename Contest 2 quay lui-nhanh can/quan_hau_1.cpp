/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
bool hang[100],cot[100];
bool a1[100],a2[100];
int dem=0;
vector<int > tong;
void Xu_li(int n,int i)
{
	for(int j=1;j<=n;j++)
	{
		if(hang[j]==0&&cot[j]==0&&a1[i+j-1]==0&&a2[i-j+n]==0)
		{
			hang[j]=cot[j]=a1[i+j-1]=a2[i-j+n]=1;
			if(i==n)
			{
				dem++;
				tong.push_back(dem);
			}
			else Xu_li(n,i+1);
			hang[j]=cot[j]=a1[i+j-1]=a2[i-j+n]=0;
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
		tong.clear();
		Xu_li(n,1);
		cout<<tong.size();
		cout<<endl;
	}
	return 0;
}

