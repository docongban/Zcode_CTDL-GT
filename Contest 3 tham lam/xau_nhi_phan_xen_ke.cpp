/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
void Handle(int n)
{
    for(int i=0;i<n;i++)
    {
        if(i%2==0) cout<<0<<" ";
        else cout<<1<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        if(i%2==1) cout<<0<<" ";
        else cout<<1<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    Handle(n);
    return 0;
}
