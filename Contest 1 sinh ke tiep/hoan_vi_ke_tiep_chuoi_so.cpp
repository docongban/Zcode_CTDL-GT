/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int arr[100];
string str;
void Xu_li(string str)
{
	for(int j=1;j<=str.size();j++) arr[j]=(str[j-1]-'0');
	int i=str.size()-1;
	while(i>0&&arr[i]>=arr[i+1]) i--;
	if(i<=0) cout<<"BIGGEST";
	else
	{
		int k=str.size();
		while(arr[k]<=arr[i]) k--;
		swap(arr[k],arr[i]);
		int l=i+1,r=str.size();
		while(l<r)
		{
			swap(arr[l],arr[r]);
			l++;
			r--;
		}
		for(int j=1;j<=str.size();j++) cout<<arr[j];
	}
	
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x;
		cin>>x>>str;
		cout<<x<<" ";
		Xu_li(str);
		cout<<endl;
	}
	return 0;
}

