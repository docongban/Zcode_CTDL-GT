/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
vector<int> arr;
vector<int> prime;
void Xuat()
{
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
bool Check(int n)
{
    if(n<2) return false;
	if(n<=3) return true;
	if(n%2==0||n%3==0) return false;
	for(int i=5;i<=sqrt(n);i+=6)
	{
		if(n%i==0&&n%(i+2)==0)
		{
			return false;
		}
	}
	return true;
}
void Sum(int x,int n,int s,int k)
{
    if(x==s&&arr.size()==n)
    {
        Xuat();
        return;
    }
    if(x>s||k==prime.size()) return;
    arr.push_back(prime[k]);
    Sum(x+prime[k],n,s,k+1);
    arr.pop_back();
    Sum(x,n,s,k+1);
}
void Handle(int n,int p,int s)
{
    for(int i=p+1;i<=s;i++)
    {
        if(Check(i)) prime.push_back(i);
    }
    if(prime.size()<n) return;
    Sum(0,n,s,0);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,p,s;
        cin>>n>>p>>s;
        Handle(n,p,s);
        cout<<endl;
    }
    return 0;
}
