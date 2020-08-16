#include<bits/stdc++.h>
using namespace std;
void solve(string s)
{
	int t1=0,t0=0;
	for (int i = 0; s[i]!='\0'; ++i)
	{
		if (s.at(i)=='0')
		{
			t0++;
		}
		else
		{
			t1++;
		}
	}
	int ans=min(t0,t1),p1s0=0,p0s1=0,e0=0,e1=0;
	for (int i = 0; s[i]!='\0'; ++i)
	{
		if (s.at(i)=='0')
		{
			e0++;
		}
		else
		{
			e1++;
		}
		p1s0=e0+t1-e1;
		p0s1=e1+t0-e0;
		ans=min(ans,p1s0);
		ans=min(ans,p0s1);
	}
	cout<<ans<<endl;
}
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		solve(s) ;
	}
	return 0;
}