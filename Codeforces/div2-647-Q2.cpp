#include<bits/stdc++.h>
using namespace std;
bool equalArray(int a[],int b[],int n)
{
	bool flag=true;
	for (int i = 0; i < n; ++i)
	{
		if(a[i]!=b[i])
		{
			return !flag;
		}
	}
	return flag;
}
void solve(int a[],int n)
{
	sort(a,a+n);
	for (int i = 1; i <= 1024; ++i)
	{
		int b[n],c=0;
		for (int j = 0; j < n; ++j)
		{
			b[c++]=a[j]^i;
		}
		sort(b,b+n);
		if (equalArray(a,b,n))
		{
			cout<< i<<endl;
			return;
		}
	}
	cout<< -1<<endl;
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
		solve(a,n);
		t--;
	}
}
