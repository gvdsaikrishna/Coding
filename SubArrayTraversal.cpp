/*

Find the number of sub arrays with equal number of even and odd numbers



*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	map<int,int> m;
	int res=0,out=0,k;
	while(n--)
	{
		m[res]++;
		cin>>k;
		out+=m[res+=(k&1 ? 1 : -1)];
	}
	cout<<out;
	return 0;
}
