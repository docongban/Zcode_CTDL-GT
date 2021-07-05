/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
struct Data
{
    int x,y;
};
bool cmp(Data a, Data b)
{
    return a.x<b.x;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Data arr[100];
        int tmp[100];
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i].x>>arr[i].y;
            tmp[i]=1;
        }
        sort(arr+1,arr+1+n,cmp);
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<i;j++)
            {
                if(arr[i].x>arr[j].y) tmp[i]=max(tmp[i],tmp[j]+1);
            }
        }
        cout<<tmp[n];
        cout<<endl;
    }
    return 0;
}
