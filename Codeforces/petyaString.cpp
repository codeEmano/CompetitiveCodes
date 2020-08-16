#include<bits/stdc++.h>
using namespace std;
int solve(string s1,string s2)
{
	int i=0;
	for(i=0;i<s1.size();i++)
	{
		if (tolower(s1[i])!=tolower(s2[i]))
		{
			int diff=(int)(tolower(s1[i]))-(int)(tolower(s2[i]));
			return diff;
		}
	}
	return 0;
}
int main()
{
	string s1,s2;
	cin>> s1;
	cin>> s2;
	cout<< solve(s1,s2);
	return 0;
}