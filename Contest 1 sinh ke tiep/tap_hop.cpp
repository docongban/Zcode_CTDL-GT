/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int arr[15],dem;
void Sinh(int n,int k,int x,int i)
{
    for(int j=arr[i-1]+1;j<=n-k+i;j++)
    {
        arr[i]=j;
        if(i==k)
        {
            int tong=0;
            for(int i=1;i<=k;i++) tong+=arr[i];
            if(tong==x) dem++;
        }
        else Sinh(n,k,x,i+1);
    }
}
int main()
{
    int n,k,x;
    while(true)
    {
        cin>>n>>k>>x;
        dem=0;
        if(n==0&&k==0&&x==0) break;
        Sinh(n,k,x,1);
        cout<<dem<<endl;
    }
    return 0;
}
