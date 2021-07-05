/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
struct data 
{
	int start,finish;
};
bool cmp(data a, data b)
{
	if(a.finish<b.finish) return true;
	return false;
}
data arr[1005];
void Handle(int n)
{
	for(int i=0;i<n;i++) cin>>arr[i].start;
	for(int i=0;i<n;i++) cin>>arr[i].finish;
	sort(arr,arr+n,cmp);
	int dem=1,x=0;
	for(int i=1;i<n;i++)
	{
		if(arr[i].start>=arr[x].finish)
		{
			dem++;
			x=i;
		}
	}
	cout<<dem;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		Handle(n);
		cout<<endl;
	}
	return 0;
}
