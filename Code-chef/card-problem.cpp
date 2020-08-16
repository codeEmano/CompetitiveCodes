#include<bits/stdc++.h>
using namespace std;
/*int countDig(long num)
{
	int c=0;
	while(num)
	{
		c++;
		num/=10;
	}
	return c;
}*/
void solve(long pc,long pr)
{
	int c=0;
	if(pr<=pc || abs(pc-pr)<10)
	{
		c=pr%9==0 ? pr/9 : (pr/9)+1;
		cout<<"1 "<<c<<endl;
	}
	else
	{
		c=pc%9==0 ? pc/9 : (pc/9)+1;
		cout<<"0 "<<c<<endl;
	}
}

int main()
{
	long t,pc,pr;
	cin>>t;
	while(t--)
	{
		cin>>pc;
		cin>>pr;
		solve(pc,pr);
	}
	return 0;
}
