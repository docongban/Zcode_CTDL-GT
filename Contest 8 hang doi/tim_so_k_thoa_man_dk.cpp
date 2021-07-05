/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int arr[100005];
bool Check(int n)
{
    int x=0;
    while(n>0)
    {
        arr[x++]=n%10;
        n/=10;
    }
    for(int i=0;i<x;i++)
    {
        if(arr[i]>5)
        {
            return false;
        }
    }
    return true;
}
bool Check_2(int n)
{
    int x=0;
    while(n>0)
    {
        arr[x++]=n%10;
        n/=10;
    }
    /*vector<int> v;
    for(int j=x-1;j>=0;j--)
	{
		if(arr[j]!=10)
		{
			int dem=1;
			for(int k=j-1;k>=0;k--)
			{
				if(arr[j]==arr[k])
				{
					dem++;
					arr[k]=10;
				}
			}
            v.push_back(dem);
		}
	}
    for(int i=0;i<v.size();i++) 
    {
        if(v[i]>1)
        {
            return false;
        }
    }
    return true;*/
    int dem[100005]={0};
    for(int i=0;i<x;i++) dem[arr[i]]++;
    for(int i=0;i<x;i++)
    {
        if(dem[arr[i]]>1) return false;
    }
    return true;
}
void Handle(int a,int b)
{
    long long dem=0;
    for(int i=a;i<=b;i++)
    {
        if(Check_2(i)==true&&Check(i)) dem++;
    }
    cout<<dem;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a>b) swap(a,b);
        Handle(a,b);
        //Check_2(a);
        cout<<endl;
    }
    return 0;
09 
