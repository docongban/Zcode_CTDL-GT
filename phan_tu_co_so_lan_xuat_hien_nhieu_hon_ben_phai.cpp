/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int arr[1000000];
int brr[1000000];
int crr[1000000];
void Init(int n)
{
    for(int i=0;i<n;i++) cin>>arr[i];
}
void Handle(int n)
{
    for(int i=0;i<n;i++) brr[i]=1;
    sort(arr,arr+n);
    int x=0;
    for(int i=0;i<n;i++)
	{
		int dem=1;
		if(brr[i])
		{
			for(int j=i+1;j<n;j++)
			{
				if(arr[i]==arr[j])
				{
					dem++;
					brr[j]=0;
				}
			}
            crr[x++]=dem;
		}
	}
    for(int i=0;i<x;i++) cout<<crr[i]<<" ";
    //for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Init(n);
        Handle(n);
        cout<<endl;
    }
    return 0;
}
