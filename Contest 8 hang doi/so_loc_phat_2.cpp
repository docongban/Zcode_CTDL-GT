/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int arr[15];
long long sqr(int n)
{
    return n*n;
}
long long Pow(int x,int n)
{
    if(n==0) return 1;
    long long tmp=Pow(x,n/2);
    if(n%2==0) return sqr(tmp);
    return x*sqr(tmp);
}
void Handle(int n,int i)
{
    for(int j=0;j<=1;j++)
    {
        arr[i]=j;
        if(i==n)
        {
            for(int k=1;k<=n;k++)
            {
                if(arr[k]==0) cout<<'6';
                else cout<<'8';
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
        long long kq=0;
        for(int i=1;i<=n;i++) kq+=Pow(2,i);
        cout<<kq<<endl;
        for(int i=1;i<=n;i++)
        {
            Handle(i,1);
        }
        cout<<endl;
    }
    return 0;
}
