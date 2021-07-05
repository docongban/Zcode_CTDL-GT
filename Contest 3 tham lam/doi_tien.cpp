/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int arr[]={1000,500,200,100,50,20,10,5,2,1};
void Xu_li(long long n)
{
	long long dem=0;
	for(long long i=0;i<10;i++)
	{
		dem+=n/arr[i];
		n%=arr[i];
	}
	cout<<dem;
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

