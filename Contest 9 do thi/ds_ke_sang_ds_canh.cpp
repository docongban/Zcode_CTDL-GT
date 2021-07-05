#include<bits/stdc++.h>
using namespace std;
string str;
void Handle(int n)
{
    vector<int> ke[1000];
    for(int i=1;i<=n;i++)
    {
        getline(cin,str);
        str+=" ";
        int x=0;
        for(int j=0;j<str.size();j++)
        {
            if(str[j]>='0'&&str[j]<='9')
            {
                x=x*10+(int)(str[j]-'0');
            }
            else if(x>0)
            {
                ke[i].push_back(x);
                x=0;
            }
        }
    }
    for(int i=1;i<=n;i++) sort(ke[i].begin(),ke[i].end());
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<ke[i].size();j++)
        {
            if(i<ke[i][j])
            {
                cout<<i<<" "<<ke[i][j]<<endl;
            }
        }
    }
}
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    Handle(n);
    return 0;
}