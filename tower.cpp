#include<bits/stdc++.h>
using namespace std;
int main()
{
	/*int n,tower=1;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	int max=a[0];
	for (int i = 1; i < n; ++i)
	{
		if (a[i]>=max && a[i]<=a[i- 1])
		{
			tower++;
			max=a[i];
		}
	}
	cout<<tower;*/
	 int n;
    cin >> n;
    vector<int> v;

    for(int i=0;i<n;i++)
    {
        int a;
        cin >> a;
        int p = upper_bound(v.begin(),v.end(),a) - v.begin();
        if(p < v.size())
            v[p] = a;
        else
            v.push_back(a);
    }
    /*cout<<"\n";
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";*/
    cout<<"\n"<<v.size()<<endl;
	return 0;
}
