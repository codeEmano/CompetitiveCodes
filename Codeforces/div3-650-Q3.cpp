#include<bits/stdc++.h>
using namespace std;
void solve(string s,int n,int k)
{
	int c=0;
	for (int i = 0; i < n-k; ++i)
	{
		if(s.at(i)=='0')
		{
			if(i>k)
			{
				if (s.at(i-k)!='1' && s.at(i+k)!='1')
				{
					c++;
				}
			}
			else
			{
				if (s.at(i+k)!='1')
				{
					c++;
				}
			}
		}
	}
	cout<<c<<endl;
}
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		int n,k;
		cin>>s;
		cin>>n>>k;
		solve(s,n,k);
	}
	return 0;
}