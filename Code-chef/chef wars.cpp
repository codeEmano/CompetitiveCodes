#include<bits/stdc++.h>
using namespace std;
void solve(long h,long p)
{
	if(p>h)
	{
		cout<<"0 "<<endl;
		return;
	}
	while(h>0 && p>0)
	{
		h-=p;
		/*if(h==0)
	{
		cout<<"1"<<endl;
		return ;
	}
		*/
		//cout<<"h= "<<h<<" p= "<<p<<endl;
		p/=2;
	}
	if(h==0)
	{
		cout<<"1"<<endl;
	}
	else
	{
		cout<<"0"<<endl;
	}
}
int main()
{
	int t;
	cin>>t;
	long h,p;
	while(t--)
	{

		cin>>h>>p;
		solve(h,p);
	}
	return 0;
}
