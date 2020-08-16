#include<bits/stdc++.h>
using namespace std;
void solve(long long int a[],long long int n,long long int x)
{
	int c=0,max=0,sum=0;
	for (int i = 0; i < n; ++i)
	{
		c=0;
		sum=0;
		for (int j = i; j < n-1; ++j)
		{
			sum+=a[j];
			if(sum%x==0 && (sum+a[j+1])%x==0)
			{
				break;
			}
			c++;
		}
		if(max<c)
		{
			max=c;
		}
	}
	int m=-1;
	if (max==0)
	{
		cout<<m<<endl;
	}
	else
	{
		cout<<max<<endl;
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,x;
		cin>>n>>x;
		long long int a[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		solve(a,n,x);
	}
}