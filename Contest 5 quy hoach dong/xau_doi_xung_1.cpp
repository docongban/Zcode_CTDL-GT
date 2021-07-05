/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
string str;
int tmp[50][50];
void Handle()
{
    for(int i=0;i<str.size();i++) tmp[i][i]=1;
    for(int i=2;i<=str.size();i++) 
    {
        for(int j=0;j<str.size()-i+1;j++)
        {
            int k=i+j-1;
            if(str[j]==str[k]&&i==2) tmp[j][k]=2;
            else if(str[j]==str[k]) tmp[j][k]=tmp[j+1][k-1]+2;
            else tmp[j][k]=max(tmp[j][k-1],tmp[j+1][k]);
        }
    }
    cout<<str.size()-tmp[0][str.size()-1];
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>str;
        Handle();
        cout<<endl;
    }
    return 0;
}
