/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int arr[15];
void Handle(int n,int i)
{
    for(int j=0;j<=1;j++)
	{
		arr[i]=j;
		if(i==n)
		{
			for(int k=1;k<=n;k++)
			{
				if(arr[k]==0) cout<<'8';
				else cout<<'6';
			}
			cout<<" ";
		}
		else Handle(n,i+1);
	}
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=n;i>=1;i--)
        {
            Handle(i,1);
        }
        cout<<endl;
    }
    return 0;
}
