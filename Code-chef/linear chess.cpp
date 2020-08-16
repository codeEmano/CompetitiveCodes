#include<bits/stdc++.h>
using namespace std;
void solve(long k,int n,long p[])
{
	long min=LONG_MAX,flag=0;
	int pos=0;
	for(int i=0;i<n;i++)
	{
		if(k%p[i]==0)
		{
			flag=1;
			if(min>k/p[i])
			{
				min=k/p[i];
				pos=i;
			}
		}
	}
	if(flag==0)
	{
		cout<<-1<<endl;
	}
	else
	{
		cout<<p[pos]<<endl;
	}
}
int main()
{
	int t,n;
	cin>>t;
	long k,p[n];
	while(t--)
	{
		cin>>n;
		cin>>k;
		for(int i=0;i<n;i++)
		{
			cin>>p[i];
		}
		solve(k,n,p);
	}
}
