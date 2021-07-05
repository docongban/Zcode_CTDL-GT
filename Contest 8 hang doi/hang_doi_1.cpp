/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
void Handle(int n)
{
    queue<int> q;
    int select;
    while(n--)
    {
        cin>>select;
        if(select==1) cout<<q.size()<<endl;
        else if(select==2) 
        {
            if(q.size()>0) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
        else if(select==3)
        {
            int x;
            cin>>x;
            q.push(x);
        }
        else if(select==4&&q.size()>0) q.pop();
        else if(select==5)
        {
            if(q.size()>0) cout<<q.front()<<endl;
            else cout<<-1<<endl;
        }
        else if(select==6)
        {
            if(q.size()>0) cout<<q.back()<<endl;
            else cout<<-1<<endl;
        }
    }
    cout<<endl;
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
    }
    return 0;
}
