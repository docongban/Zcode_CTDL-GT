/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int arr[100];
vector<int> v;
void Nhap(int arr[],int n)
{
	for(int i=0;i<n;i++) cin>>arr[i];
}
void Xu_li(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		v.push_back(arr[i]);
		sort(v.begin(),v.end());
		cout<<"Buoc "<<i<<": ";
		for(int j=0;j<v.size();j++)
		{
			cout<<v[j]<<" ";
		}
		cout<<endl;
	}
}
int main()
{
	int n;
	cin>>n;
	Nhap(arr,n);
	Xu_li(arr,n);
	return 0;
}

