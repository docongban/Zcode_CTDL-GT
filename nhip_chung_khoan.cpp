/*Code By BanDC*/
//VS Code
#include <bits/stdc++.h>
using namespace std;
int arr[1000000];
int tmp[1000000];
void Init(int n)
{
    for(int i=0;i<n;i++) cin>>arr[i];
}
void Handle(int n)
{
    stack<int> stk;
    stack<int> dem;
    tmp[0]=1;
    for (int i=1;i<n;i++) 
    {
        if(arr[i]<arr[i - 1]) 
        {
            tmp[i] = 1;
            stk.push(arr[i-1]);
            dem.push(tmp[i-1]);
        } 
        else 
        {
            tmp[i]=tmp[i-1]+1;
            while(stk.empty()==0&&arr[i]>=stk.top()) 
            {
                tmp[i]+=dem.top();
                dem.pop();
                stk.pop();
            }
        }
    }
    for(int i=0;i<n;i++) cout<<tmp[i]<< " ";
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
