/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
void Xu_li(long long tu,long long mau)
{
	long long kq;
	while(true)
	{
		if(mau%tu!=0)
		{
			kq=mau/tu+1;
			cout<<"1/"<<kq<<" + ";
			tu=tu*kq-mau;
			mau=mau*kq;
		}
		else
		{
			cout<<"1/"<<mau/tu;
			break;
		}
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long tu,mau;
		cin>>tu>>mau;
		Xu_li(tu,mau);
		cout<<endl;
	}
	return 0;
}
