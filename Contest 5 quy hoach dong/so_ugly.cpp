/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
long long arr[1005];
void Xu_li(int n)
{
	long long i2=0,i3=0,i5=0;
	arr[0]=1;
	for(int i=1;i<n;i++)
	{
		arr[i]=min(arr[i2]*2,min(arr[i3]*3,arr[i5]*5));
		if(arr[i]==arr[i2]*2) i2++; 
		if(arr[i]==arr[i3]*3) i3++; 
		if(arr[i]==arr[i5]*5) i5++; 
	}
	cout<<arr[n-1];
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		Xu_li(n);
		cout<<endl;
	}
	return 0;
}

