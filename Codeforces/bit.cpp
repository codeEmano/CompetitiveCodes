#include<bits/stdc++.h>
using namespace std;
string str;
int n;
int x=0;
int solve(string s)
{
	int l=s.size(),i=0;
	for (int i = 0; i < l; ++i)
	{
		if (s.at(i) == '+')
		{
			x++;
			return x;
		}
		if (s.at(i) == '-')
		{
			x--;
			return x;
		}
	}
}

int main()
{	
	cin>> n;
	while(n)
	{
		cin>> str;
		n--;
		x=solve(str);
	}
	cout<< x;
	return 0;		
}
