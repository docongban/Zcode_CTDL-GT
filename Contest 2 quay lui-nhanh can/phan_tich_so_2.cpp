/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int arr[100],k;
bool test;
int dem=0;
void Xuat(int n)
{
    for(int i=1;i<=n;i++)
    {
        if(i==1) cout<<"(";
        cout<<arr[i];
        if(i==n) cout<<")";
        if(i<n) cout<<" ";
    }
    cout<<" ";
}
void Handle(int n)
{
    int i=k;
    while(i>0&&arr[i]==1) i--;
    if(i<=0) test=true;
    else
    {
        arr[i]--;
        int D=k-i+1;
        k=i;
        for(int j=i+1;j<=i+D/arr[i];j++) arr[j]=arr[i];
        k+=D/arr[i];
        if(D%arr[i]) arr[++k]=D%arr[i];
    }
}
void Dem(int n)
{
    k=1;
    arr[k]=n;
    test=false;
    dem=0;
    while(test==0)
    {
        Handle(n);
        dem++;
    }
    cout<<dem<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Dem(n);
        k=1;
        arr[k]=n;
        test=false;
        while(test==0)
        {
            Xuat(k);
            Handle(n);
            dem++;
        }
        cout<<endl;
    }
    return 0;
}
