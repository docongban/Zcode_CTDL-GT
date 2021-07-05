/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
string str;
int n;
int main()
{
    stack<int> stk;
    while(cin>>str)
    {
        if(str=="push")
        {
            cin>>n;
            stk.push(n);
        }
        if(str=="pop") stk.pop();
        if(str=="show")
        {
            vector<int> arr;
            if(stk.size()==0)
            {
                cout<<"empty"<<endl;;
                continue;
            }
            while(stk.size()>0)
            {
                arr.push_back(stk.top());
                stk.pop();
            }
            reverse(arr.begin(), arr.end());
            for(int i=0;i<arr.size();i++)
            {
                cout<<arr[i]<<" ";
                stk.push(arr[i]);
            }
            cout<<endl;
        }
    }
    return 0;
}
