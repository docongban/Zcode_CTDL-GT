/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
string str1,str2;
void Xu_li(int k)
{
	while(str1.size()>str2.size()) str2="0"+str2;
	while(str2.size()>str1.size()) str1="0"+str1;
	int nho=0,l=str1.size();
	string kq="";
	for(int i=l-1;i>=0;i--)
	{
		int tam=int(str1[i]-'0')+int(str2[i]-'0')+nho;
		kq=char(tam%k+'0')+kq;
		nho=tam/k;
	}
	if(nho>0) kq=char(nho+'0')+kq;
	cout<<kq;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k;
		cin>>k>>str1>>str2;
		Xu_li(k);
		cout<<endl;
	}
	return 0;
}
