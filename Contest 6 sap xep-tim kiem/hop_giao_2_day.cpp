/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int arr[100005];
int brr[100005];
int crr[100005];
int drr[100005];
void Init(int arr[],int n)
{
    for(int i = 0; i < n; i++) cin>>arr[i];
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        Init(arr,n);
        Init(brr,m);
        int x=n+m;
        for(int i=0;i<x;i++) 
        {
            if(i<n) crr[i]=arr[i];
            else crr[i]=brr[i-n];
        }
        int t=0;
        for(int i=1;i<x;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(crr[i]==crr[j])
                {
                    for(int k=i;k<x;k++)
                    {
                        crr[k]=crr[k+1];
                    }
                    x--;
                    drr[t++]=crr[j];
                }
            }
        }
        sort(crr,crr+x);
        for(int i=0;i<x;i++) cout<<crr[i]<<" ";
        cout<<endl;
        for(int i=0;i<t;i++) cout<<drr[i]<<" ";
        cout<<endl;
    }
    return 0;
}
