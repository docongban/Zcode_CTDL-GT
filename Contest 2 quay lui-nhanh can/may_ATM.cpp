/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int arr[100000];
int tmp[100000];
bool test;
void Init(int n)
{
    for(int i=1;i<=n;i++) cin>>arr[i];
}
void Sinh(int n,int k)
{
    int i=k;
    while(i>0&&tmp[i]==n-k+i) i--;
    if(i==0) test=1;
    else
    {
        tmp[i]+=1;
        for(int j=i+1;j<=k;j++) tmp[j]=tmp[j-1]+1;
    }
}
int Handle(int n,int s)
{
    int check=0;
    for(int i=1;i<=n;i++)
    {
        test=0;
        for(int j=1;j<=i;j++) tmp[j]=j;
        while(test==0)
        {
            int tong=0;
            for(int j=1;j<=i;j++) tong+=arr[tmp[j]];
            if(tong==s)
            {
                return i;
                return 0;
                check=1;
            }
            Sinh(n,i);
        }
    }
    if(check==0) return -1;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s;
        cin>>n>>s;
        Init(n);
        cout<<Handle(n,s);
        cout<<endl;
    }
    return 0;
}
