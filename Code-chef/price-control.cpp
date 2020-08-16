#include <iostream>
using namespace std;
void solve(int a[],int k,int n)
{
	int sum=0,i=0;
	for ( i = 0; i < n; ++i)
	{
		if (a[i]>k)
		{
			sum+=(a[i]-k);
		}
	}
	cout<<sum<<endl;
}
int main()
{
	int t;
	cin>> t;
	while(t>0)
	{
		int n,k,i=0;
		cin>> n;
		cin>> k;
		int a[n];
		for ( i = 0; i < n; ++i)
		{
			cin>> a[i];
		}
		solve(a,k,n);
		t--;
	}
	return 0;
}