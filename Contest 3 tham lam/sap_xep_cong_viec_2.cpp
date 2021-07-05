/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
struct data
{
    int jobid,dedline,profit;
};
bool cmp(data a, data b)
{
    if(a.profit>b.profit) return true;
    return false;
}
data arr[1005];
void Handle(int n)
{
    for(int i=0;i<n;i++) cin>>arr[i].jobid>>arr[i].dedline>>arr[i].profit;
    sort(arr,arr+n,cmp);
    int check[1005]={0};
    int job=0,kq=0;
    for(int i=0;i<n;i++) 
    {
        while(check[arr[i].dedline]==1&&arr[i].dedline) arr[i].dedline--; //thời điểm đã bị làm và vẫn còn cái khác chưa làm
        if(arr[i].dedline>0&&check[arr[i].dedline]==0)// vẫn còn thời gian và còn những việc khác chưa làm
        {
            kq+=arr[i].profit;
            job++;
            check[arr[i].dedline]=1;
        }
    }
    cout<<job<<" "<<kq;
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
