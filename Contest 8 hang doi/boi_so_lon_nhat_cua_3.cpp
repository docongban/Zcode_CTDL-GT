/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int arr[100000];
void Init(int n)
{
    for(int i=0;i<n;i++) cin>>arr[i];
}
void Gan(int tmp[],queue<int> q0,queue<int> q1,queue<int> q2,int* x)
{
    while(!q0.empty()) 
    {
        tmp[(*x)++]=q0.front();
        q0.pop();
    }
    while(!q1.empty()) 
    {
        tmp[(*x)++]=q1.front();
        q1.pop();
    }
    while(!q2.empty()) 
    {
        tmp[(*x)++]=q2.front();
        q2.pop();
    }
}
int Handle(int n)
{
    sort(arr,arr+n);
    queue<int> q0,q1,q2;
    int tong=0;
    for(int i=0;i<n;i++)
    {
        tong+=arr[i];
        if(arr[i]%3==0) q0.push(arr[i]);
        else if(arr[i]%3==1) q1.push(arr[i]);
        else q2.push(arr[i]);
    }
    if(tong%3==1)
    {
        if(!q1.empty()) q1.pop();
        else
        {
            if(!q2.empty()) q2.pop();
            else return 0;

            if(!q2.empty()) q2.pop();
            else return 0;  
        }
    }
    else if(tong%3==2)
    {
        if(!q2.empty()) q2.pop();
        else
        {
            if(!q1.empty()) q1.pop();
            else return 0;

            if(!q1.empty()) q1.pop();
            else return 0;
        }
    }
    int tmp[100000],x=0;
    Gan(tmp,q0,q1,q2,&x);
    sort(tmp,tmp+x,greater<int>());
    for(int i=0;i<x;i++) cout<<tmp[i];
    return x;
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
        if(Handle(n)==0) cout<<-1;
        cout<<endl;
    }
    return 0;
}
