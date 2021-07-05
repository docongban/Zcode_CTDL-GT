/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
void Handle(long long n)
{
    vector<long long> v;
    while(n>0)
    {
        v.push_back(n%10);
        n/=10;
    }
    reverse(v.begin(), v.end());
    //1200 -> max BDN=1111
    int position=v.size();
    for(int i=0;i<v.size();i++)
    {
        if(v[i]>=2)
        {
            position=i;
            break;
        }
    }
    //sau vj trí đó cho tất cả bằng 1
    for(int i=position;i<v.size();i++) v[i]=1;
    long long kq=0;
    long long x=1;
    //so lượng số chính là giá trị chữ số lớn nhất 111->7
    for(int i=v.size()-1;i>=0;i--)
    {
        kq+=v[i]*x;
        x*=2;
    }
    cout<<kq;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        Handle(n);
        cout<<endl;
    }
    return 0;   
}
