/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
void Xu_li(long long n)
{
	vector<long long> arr;
	while(n>0)
	{
		arr.push_back(n%10);
		n/=10;
	}
	reverse(arr.begin(),arr.end());
	long long result=0;
	for(int i=0;i<arr.size();i++)
	{
		long long tam=0;
		for(int j=i;j<arr.size();j++)
		{
			tam=tam*10+arr[j];
			result+=tam;
		}
	}
	cout<<result;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Xu_li(n);
		cout<<endl;
	}
	return 0;
}

