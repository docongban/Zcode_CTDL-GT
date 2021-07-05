/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
string str;
void Handle()
{
    stringstream str1(str);
    string token;
    string tach[100];
    int x;
    while(str1>>token)
    {
        tach[x]=token;
        x++;
    }
    for(int i=x-1; i>=0; i--) cout<<tach[i]<<" ";
}
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        getline(cin,str);
        Handle();
        cout<<endl;
    }
    return 0;
}
