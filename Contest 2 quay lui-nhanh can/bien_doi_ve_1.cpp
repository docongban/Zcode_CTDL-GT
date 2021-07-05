/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int Min(int n,int arr[])
{
    if(n==1) return 0;
    if(arr[n]!=-1) return arr[n];
    int kq=Min(n-1,arr);
    if(n%2==0) kq=min(kq,Min(n/2,arr));
    if(n%3==0) kq=min(kq,Min(n/3,arr));
    arr[n]=1+kq;
    return arr[n];
}
void Handle(int n)
{
   int tmp[100000]; 
   for(int i=0;i<=n;i++) tmp[i]=-1;
   cout<< Min(n,tmp);

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
