#include<bits/stdc++.h>
using namespace std;

int solve(long long int a,long long int b)
{
	if(a==b)
	{
		return 0;
	}
	long long int shift= a>b ? a/b : b/a;
	long long int big=a>b ? a : b;
	long long int small=a<b ? a : b;
	int step=0;
	long long int cpy=shift;
	if(cpy==1 || big%small!=0)
        return -1;
	while(cpy >= 8)
    {
        if(cpy%8!=0)
        {
            break;
        }
        cpy/=8;
        step++;
    }
	while(cpy >= 4)
	{
	    if(cpy%4!=0)
        {
            break;
        }
		step++;
		cpy/=4;
	}
	while(cpy >= 2)
    {
        if(cpy % 2 !=0)
        {
            return -1;
        }
        step++;
        cpy/=2;
    }
	return step;
}
int main()
{
	int t;
	cin>> t;
	while(t>0)
	{
		long long int a,b;
		cin>> a;
		cin>> b;
		t--;
		int res=solve(a,b);
		cout<< res<<endl;
	}
	return 0;
}
