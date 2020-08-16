#include<bits/stdc++.h>
using namespace std;
void solve(string s)
{
	int len=s.size();
	if (len==2)
	{
		cout<<s<<endl;
	}
	else
	{
		int c=0;
		string a="";
		a+=s.at(0);
		for (int i = 1; i < len; ++i)
		{
			if(c%2==0 || i==len-1)
			{
				a=a+s.at(i);
			}
			c++;
		}
		cout<<a<<endl;
	}
}
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		solve(s);
	}
	return 0;
}
