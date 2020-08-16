#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>> s;
	int i=0,len=s.size(),ctr=0;
	char s1[len],s2[len];
	for(i=0;i<len;i++)
	{
		  if(s[i]!='+')
		  {
		  	s1[ctr++]=s[i];
		  }
	}
	sort(s1, s1+ctr);
	int ctr1=0;
	i=0;
	while(i!=ctr)
	{
		if(ctr1%2==0)
		{
			s2[ctr1++]=s1[i++];
		}
		else
		{
			s2[ctr1++]='+';
		}
	}

		cout<<s2;

	return 0;
}
