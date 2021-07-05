/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int arr[100005];
int brr[100005];
void Init(int arr[],int n)
{
    for(int i=0;i<n;i++) cin>>arr[i];
}
/*x^y>y^x <==> y>x
if(x==0) mọi y thì x^y<=y^x kq+=0;
if(x==1&&y==0)  thỏa mãn    kq+=1;
if(x==2&&y==3||4) x^y<=y^x  kq-=(dem[3]+dem[4]);
if(x==3&&y==2) thỏa mãn     kq+=dem[2];
*/
long long Count(int brr[],int m,int dem[],int x)
{
    if(x==0) return 0;
    if(x==1) return dem[0];
    int tam = upper_bound(brr,brr+m,x)-brr;//vị trí min mà x <= vị trí nào đó
    long long kq=m-tam;
    kq+=dem[0]+dem[1];
    if(x==2) kq-=(dem[3]+dem[4]);
    if(x==3) kq+=dem[2];
    return kq;
}
void Handle(int n,int m)
{
    int dem[10]={0};
    for(int i=0;i<m;i++) 
    {
        if(brr[i]<5) dem[brr[i]]++;
    }
    sort(brr,brr+m);
    int kq=0;
    for(int i=0;i<n;i++)
    {
        kq+=Count(brr,m,dem,arr[i]);
    }
    cout<<kq;
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
        Handle(n,m);
        cout<<endl;
    }
    return 0;
}
