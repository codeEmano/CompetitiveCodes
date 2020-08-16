#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x,u,v;
		cin>>n>>x;
		int degree[n+1];
		for (int i = 1; i <= n-1; ++i)
		{
			cin>>u>>v; 
			degree[u]++;
			degree[v]++;
		}
		if (degree[x]==1)
		{
			cout<<"Ayush"<<endl;
		}
		else
		{
			if(n % 2)
				cout << "Ashish" << endl;
			else
				cout << "Ayush" << endl;
		}
	}
	return 0;
}