/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int arr[100000];
void Init(int n)
{
    for(int i=0;i<n;i++) cin>>arr[i];
}
void Xoa(int &n,int x)
{
    for(int i=x+1;i<n;i++) 
    {
        arr[i-1]=arr[i];
    }
    n--;
}
void Handle(int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				Xoa(n,j);
				j--;
			}
		}
	}
	for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}
int main()
{
    int n;
    cin>>n;
    Init(n);
    Handle(n);
    return 0;
}
