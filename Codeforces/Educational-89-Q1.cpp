#include<bits/stdc++.h>
using namespace std;
void solve(long long int a,long long int b)
{
	int e=a==b?-1:0;
	while(a>0 && b>0)
	{
		if(a>b)
		{
			a-=2;
			b--;
		}
		else
		{ 
			a--;
			b-=2;
		}
		e++;
	}
	cout<<e<<endl;
	/*if(a<1 || b<1)
	{
		return 0;
	}
	return (1+max(solve(a-2,b-1),solve(a-1,b-2)));*/
}
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int a,b;
		cin>>a>>b;
		solve(a,b);
	}
	return 0;
}