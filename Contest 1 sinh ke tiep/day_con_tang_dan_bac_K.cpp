/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int arr[100];
void Init(int n)
{
    for(int i=0;i<n;i++) cin>>arr[i];
}
void Handle(int n,int k)
{
    int tmp[k][n];
    memset(tmp,0,sizeof(tmp));
    for(int i=0;i<n;i++) tmp[0][i]=1;
    for(int i=1;i<k;i++)
    {
        for(int j=i;j<n;j++) 
        {
            tmp[i][j]=0;
            for(int l=i-1;l<j;l++) 
            {
                if(arr[l]<arr[j]) tmp[i][j]+=tmp[i-1][l];
            }
        }
    }
    int count=0;
    for(int i=k-1;i<n;i++) count+=tmp[k-1][i];
    cout<<count;
}
int main()
{
    int n,k;
    cin>>n>>k;
    Init(n);
    Handle(n,k);
    return 0;
}
