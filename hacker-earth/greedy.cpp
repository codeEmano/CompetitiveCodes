#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
void solve(int a[],int n,int x)
{
	sort(a,a+n);
	int bottles=0,i=0;
	while(x>0)
	{
		x-=a[i];
		if(a[i]<x)
		bottles++;
		i++;
	}
	cout<<bottles<<endl;
}
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		solve(a,n,x);
		t--;
	}
}