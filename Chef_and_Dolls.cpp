#include<iostream>
#include<vector>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n;
	cin>>t;
	while (t--)
	{
		cin>>n;
		vector<int> D(n);
		for(int i =0; i < n; i++) cin>>D[i];
		int odd = 0;
		for(int i =0; i < n; i++) 
		odd
		^=
		D[i];
		cout<<odd<<"\n";
	}
	
	return 0;
}
