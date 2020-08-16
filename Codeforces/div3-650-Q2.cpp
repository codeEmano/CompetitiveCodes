#include<bits/stdc++.h>
using namespace std;
bool in_wrong_pos(int x,int pos)
{
	if((x%2==0 && pos%2!=0) || (x%2!=0 && pos%2==0))
	{
		return true;
	}
	else
	{
		return false;
	}
}
void solve(int a[],int n)
{
	int c_odd=0,c_even=0;
	for (int i = 0; i < n; ++i)
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
	int c=0;
	if (n%2==0)
	{
		if(c_odd!=c_even)
		{
			cout<<-1<<endl;
			return;
		}
		
			
	}
	else
	{
		if(c_even!=c_odd+1)
		{
			cout<<-1<<endl;
			return;
		}
		
	}
	for (int i = 0; i < n;i++)
			{	
				if(in_wrong_pos(a[i],i))
				{
					c++;
				}
			}
			c/=2;
			cout<<c<<endl;
		
}
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		solve(a,n);
	}
	return 0;
}