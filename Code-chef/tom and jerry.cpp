#include<bits/stdc++.h>
using namespace std;
void solve(long long int ts)
{
	long long int game[ts+1][ts+1];
	for (long long int i = 1; i<=ts; ++i)
	{
		game[1][i]=i%2==0 ? 0 : 1;
	}
	for (long long int i = 1; i<=ts; ++i)
	{
		game[i][1]=i%2==0 ? 2 : 1;
	}
	long long int win=0;
	for (long long int i = 2; i<=ts; ++i)
	{
		for(long long int j=2; j<=ts; ++j)
		{
			if (i%2==0 && j%2==0)
				{
					game[i][j]=game[i/2][j/2];
				}
				else if(i%2==0 && j%2!=0)
				{
					game[i][j]=2;
				}
				else
				{
					game[i][j]=j%2==0 ? 0 : 1;
				}
		}


	}
	for (long long int i = 2; i <=ts; i+=2)
		{
			if(game[i][ts]==2)
				win++;
		}

	cout<<win<<endl;

	/*int win=0,js=2;
	if(ts%2!=0)
	{
		win=(ts-1)/2;
		cout<< win;
		return;
	}
	else
	{
		while(js<ts)
		{
			if (js%2==0)
			{

			}
		}
	}
	while(js<ts && js>0)
	{
		if (js%2==0 && ts%2==0)
		{
			js/=2;
			ts/=2;
		}
		if (js%2!=0 && ts%2!=0)
		{
			cout<< win<<endl;
			return;
		}
		if(js%2==0 && ts%2!=0)
		{
			js+=2;
			win++;
		}
		if (js%2!=0 && ts%2==0)
		{
			js++;
		}
	}
	cout<<win<<endl;*/
}
int main()
{
	int t;
	cin>> t;
	while(t>0)
	{
		long long int ts;
		cin>> ts;
		solve(ts);
		t--;
	}
}
