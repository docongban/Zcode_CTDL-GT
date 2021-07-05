/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int arr[100];
void Nhap(int n)
{
	for(int i=0;i<n;i++) cin>>arr[i];
}
void Xu_li(int n)
{
	vector<int> tong;
	for(int i=0;i<n;i++) if(arr[i]!=0) tong.push_back(arr[i]);
	sort(tong.begin(),tong.end());
	long long x1=0,x2=0;
	for(int i=0;i<tong.size();i++)
	{
		if(i%2==0) x1=x1*10+tong[i];
		else x2=x2*10+tong[i];
	}
	cout<<(x1+x2);
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
