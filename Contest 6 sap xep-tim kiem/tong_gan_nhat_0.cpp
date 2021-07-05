/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int arr[1005];
void Init(int n)
{
    for(int i=0; i<n; i++) cin>>arr[i];
}
void Handle(int n)
{
    int Min=abs(arr[0]+arr[1]);
    int x=0,y=0;
    for(int i=0;i<n;i++) 
    {
        for(int j=i+1;j<n;j++)
        {
            if(Min>abs(arr[i]+arr[j])) 
            {
                Min=abs(arr[i]+arr[j]);
                x=arr[i];
                y=arr[j];
            }
        }
    }
    cout<<x+y;
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
    return 0;
}
