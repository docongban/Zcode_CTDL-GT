/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int arr[100005];
void Init(int n)
{
    for(int i=0;i<n;i++) cin>>arr[i];
}
void Xu_li(int n,int k)
{
    for(int i=0;i<n;i++) 
    {
        int tam=abs(arr[i]-k);
        int j=i-1;
        if(abs(arr[j]-k)>tam)
        {
            int x=arr[i];
            while(abs(arr[j]-k)>tam&&j>=0)
            {
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=x;
        }
    }
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
 }
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        Init(n);
        Xu_li(n,k);
        cout<<endl;
    }
    return 0;
}
