#include<bits/stdc++.h>
using namespace std;
void solve(string s)
{
	int pair=0;
	for (int i = 0; i < s.size()-1;)
	{
		char a=s.at(i);
		char b=s.at(i+1);
		if((a=='x' && b=='y') || (a=='y' && b=='x'))
		{
			pair++;
			i+=2;
		}
		else
		{
			i++;
		}
	}
	cout<<pair<<endl;
}
int main()
{
	int t;
	cin>> t;
	while(t>0)
	{
		string s;
		cin>> s;
		solve(s);
		t--;
	}
}