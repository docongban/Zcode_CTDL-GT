/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
long long arr[100000];
void Init(long long n)
{
    for(long long i=0;i<n;i++) cin>>arr[i];
}
void Handle(long long n)
{
    stack<long long > stk;
    long long Max=0,x,y;
    long long i=0;
    while(i<n) 
    {
        if(stk.empty()||arr[stk.top()]<=arr[i]) stk.push(i++);
        else
        {
            x=stk.top();
            stk.pop();
            if(stk.empty()) y=arr[x]*i;
            else y=arr[x]*(i-1-stk.top());
            Max=max(Max,y);
        }
    }
    while(!stk.empty())
    {
        x=stk.top(); stk.pop();
        if(stk.empty()) y=arr[x]*i;
        else y=arr[x]*(i-stk.top()-1);
        Max=max(Max,y);
    }
    cout<<Max;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        Init(n);
        Handle(n);
        cout<<endl;
    }
    return 0;
}
