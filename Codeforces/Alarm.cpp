#include<bits/stdc++.h>
using namespace std;
long a,b,c,d;
long solve(long a,long b,long c,long d)
{
	long ctr=0;
	if(a>b && c<d)
	{
		return -1;
	}
	long time=b;
	while(time<=a)
	{
	    ctr++;
		long sleep=c-d;
		time=b+(sleep*ctr);
	}
	long totalTime=b+ctr*c;
	return totalTime;
}
int main()
{
	long t;
	cin>> t;
	while(t>0)
	{
		cin>> a;
		cin>> b;
		cin>> c;
		cin>> d;
		long res=solve(a,b,c,d);
		cout<< res<<endl;
		t--;
	}
	return 0;
}
