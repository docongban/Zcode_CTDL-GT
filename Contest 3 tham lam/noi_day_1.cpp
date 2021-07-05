/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int arr[1000005];
void Init(int n)
{
    for(int i=0; i<n; i++) cin>>arr[i];
}
void Handle(int n)
{
    priority_queue<int ,vector<int>,greater<int>> q;
    for(int i=0;i<n;i++) q.push(arr[i]);
    long long kq=0;
    while(q.size()>1)
    {
        int a=q.top(); q.pop();
        int b=q.top(); q.pop();
        q.push(a+b);
        kq+=a+b;
    }
    cout<<kq;
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
