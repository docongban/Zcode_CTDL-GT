/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
struct data 
{
    int value;
    int count;
};
bool cmp(data a, data b)
{
    if(a.count>b.count) return true;
    if(a.count==b.count&&a.value<b.value) return true;
    return false;
}
data arr[100005];
void Handle(int n)
{
    int dem[100005]={0};
    for(int i=0;i<n;i++)
    {
        cin>>arr[i].value;
        dem[arr[i].value]++;
    }
    for(int i=0;i<n;i++) arr[i].count=dem[arr[i].value];
    sort(arr,arr+n,cmp);
    for(int i=0;i<n;i++) cout<<arr[i].value<<" ";
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
