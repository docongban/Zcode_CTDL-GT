/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
//4*c4+7*c7=n;
void Handle(int n)
{
    int dem4,dem7;
    for(int i=0;i<n;i++)
    {
        if((n-7*i)%4==0&&(n-7*i)>=0)
        {
            dem7=i;
            break;
        }
    }
    dem4=(n-7*dem7)/4;

    int dem_4,dem_7;
    for(int i=0;i<n;i++)
    {
        if((n-4*i)%7==0&&(n-4*i)>=0)
        {
            dem_4=i;
            break;
        }
    }
    dem_7=(n-4*dem_4)/7;

    if(dem4*4+dem7*7==n||dem_4*4+dem_7*7==n)
    {
        if(dem4<=dem_4)
        {
            for(int i=0;i<dem4;i++) cout<<4;
            for(int i=0;i<dem7;i++) cout<<7;
        }
        else if(dem_4<dem4)
        {
            for(int i=0;i<dem_4;i++) cout<<4;
            for(int i=0;i<dem_7;i++) cout<<7;
        }
    }
    else cout<<-1;
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
