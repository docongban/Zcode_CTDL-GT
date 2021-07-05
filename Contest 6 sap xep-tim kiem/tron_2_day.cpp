/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
long long arr[1000005];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        for(long long i=0;i<n+m;i++) cin>>arr[i];
        sort(arr,arr+n+m);
        for(long long i=0;i<n+m;i++) cout<<arr[i]<<" ";
        cout<<endl;
    }
    return 0;
}
