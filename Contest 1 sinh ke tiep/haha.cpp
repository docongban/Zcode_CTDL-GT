/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
char arr[20];
void Handle(int n) 
{
   if(n==2) cout<<"HA"<<endl;
   else if(n==3) cout<<"HAA"<<endl;
   else
   {
       arr[1]='H';
       arr[2]='A';
       arr[n]='A';
       for(int i=3;i<n;i++) arr[i]='A';
       for(int i=1;i<=n;i++) cout<<arr[i];
       cout<<endl;
       for(int i=n-1;i>=3;i--)
       {
           if(arr[i]=='A')
           {
               arr[i]='H';
               for(int j=i+1;j<n;j++) arr[j]='A';
               int check=1;
               for(int i=3;i<n-1;i++)
               {
                   if(arr[i]=='H'&&arr[i+1]=='H')
                   {
                       check=0;
                       break;
                   }
               }
               if(check==1)
                {
                    for(int i=1;i<=n;i++) cout<<arr[i];
                    cout<<endl;
                }
                i=n;
           }
       }
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
        Handle(n);
        cout<<endl;
    }
    return 0;
}
