#include<bits/stdc++.h>
using namespace std;
bool canClaim(int a[][],int r,int c)
{
	for (int i = 0; i < r; ++i)
	{
		if (/* condition */)
		{
			/* code */
		}
	}
}
int main()
{
	int t;
	cin>> t;
	while(t>0)
	{
		int n,m;
		cin>> n;
		cin>> m;
		int a[n][m];
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; i < m; ++j)
			{
				cin>> a[i][j];
			}
		}
		t--;
		solve(a);
	}
}