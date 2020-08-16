#include<bits/stdc++.h>
using namespace std;
void solve(int p[],int n)
{
	if (p[0]!=5)
	{
		cout<<"NO"<<endl;
		return;
	}
	int c5=1,c10=0,flag=0;
	for (int i = 1; i < n; ++i)
	{	
		if (p[i]==5)
		{
			c5++;
		}
		if(p[i]==10)
		{
			c10++;
			if (c5>0)
			{
				c5--;
			}
			else
			{
				cout<<"NO"<<endl;
				flag=1;
				break;
			}
		}
		if (p[i]==15)
		{
			if(c10>0)
			{
				c10--;
			}
			else if(c5>=2)
			{
				c5-=2; 
			}
			else
			{
				cout<<"NO"<<endl;
				flag=1;
				break;
			}
		}
	}
	if (flag==0)
	{
		cout<<"YES"<<endl;
	}
}
int main()
{
	int t;
	cin>> t;
	while(t>0)
	{
		int n;
		cin>> n;
		int a[n];
		for (int i = 0; i < n; ++i)
		{
			cin>> a[i];
		}
		t--;
		solve(a,n);
	}
}