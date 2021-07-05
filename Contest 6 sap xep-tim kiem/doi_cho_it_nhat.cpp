/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int arr[1000];
void Init(int n)
{
    for(int i=0;i<n;i++) cin>>arr[i];
}
void Handle(int n)
{
    int dem=0;
    for(int i=0;i<n;i++)
    {
        int check=0,vt=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[vt])
            {
                check=1;
                vt=j;
            }
        }
        if(check==1)
        {
            dem++;
            swap(arr[i],arr[vt]);
        }
    }
    cout<<dem;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Init(n);
        Handle(n);
        cout<<endl;
    }
}
