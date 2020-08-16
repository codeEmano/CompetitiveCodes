#include<bits/stdc++.h>
using namespace std;
void solve(int n,int x,int a[])
{
	int i=0,c_odd=0,c_even=0;
	for (i = 0; i < n; ++i)
	{
		if (a[i]%2==0)
		{
			c_even++;
		}
		else
		{
			c_odd++;
		}
	}
	if (c_odd==0)
	{
		cout<<"No"<<endl;
		return;
	}
	else if(c_even==0 && x%2==0)
	{
		cout<<"No"<<endl;
	}
	else if (x==n)
	{
		if(c_odd%2==0)
			{
				cout<<"No"<<endl;
			}
		else
		{
			cout<<"Yes"<<endl;
		}

	}
	else
	{
		cout<<"Yes"<<endl;
	}
}
int main()
{
	int t,n,x,i=0;
	cin>> t;
	while(t>0)
	{
		cin>> n;
		cin>> x;
		int a[n];
		for (i = 0; i < n; ++i)
		{
			cin>> a[i];
		}
		t--;
		solve(n,x,a);
	}
}
