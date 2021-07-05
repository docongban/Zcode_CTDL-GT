/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int arr[100],m;
long long kq=1e18;
bool test;
void Sinh(int n,int i)
{
    int tong;
    for(int j=0;j<=1;j++)
    {
        arr[i]=j;
        if(i==m)
        {
            long long tong=0;
            for(int k=1;k<=m;k++) 
            {
                tong=tong*10+arr[k];
            }
            tong*=9;
            if(tong%n==0&&tong>=n)
            {
                kq=min(kq,tong);
                test=true;
            }
        }
        else Sinh(n,i+1);
    }
}
void Handle(int n)
{
    m=1;
    test=false;
    kq=1e18;
    while(m<=17&&test==false)
    {
        Sinh(n,1);
        m++;
    }
    cout<<kq;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Handle(n);
        cout<<endl;
    }
    return 0;
}
