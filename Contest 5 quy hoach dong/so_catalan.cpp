/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
string str[100];
string str1;
string str2;
void Sum(string str1,string str2)
{
	if(str1.size()>str2.size()) swap(str1,str2);
	reverse(str1.begin(),str1.end());
	reverse(str2.begin(),str2.end());
	int l1=str1.size(),l2=str2.size();
	int x=0;
	string str="";
	for(int i=0;i<l1;i++)
	{
		int sum=(str1[i]-'0')+(str2[i]-'0')+x;
		str.push_back(sum%10+'0');
		x=sum/10;
	}
	for(int i=l1;i<l2;i++)
	{
		int sum=(str2[i]-'0')+x;
		str.push_back(sum%10+'0');
		x=sum/10;
	}
	if(x>0) str.push_back(x+'0');
	reverse(str.begin(),str.end());
}
void Nhan(string str1,string str2)
{
	int l1=str1.size(),l2=str2.size();
	string str3="";
	for(int i=0;i<l1;i++)
	{
		int x=0,tich;
		string str;
		for(int j=0;j<l2;j++)
		{
			tich=(str1[i]-'0')*(str2[j]-'0')+x;
			str.push_back(tich%10+'0');
			x=tich/10;
		}
		if(x>0) str.push_back(x+'0');
		for(int j=0;j<i;j++) str.insert(str.begin(),0);
		Sum(str,str3);
		reverse(str.begin(),str.end());
		cout<<str;
	}
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>str1>>str2;
        Nhan(str1,str2);
        cout<<endl;
    }
    return 0;
}
