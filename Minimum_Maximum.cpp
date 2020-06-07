#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long t,n,m,c;
	vector<long> v(50000);
	cin>>t;
	while (t--)
	{
		c=0;
		cin>>n;
		for(int i=0; i<n; i++) cin>>v[i];
		m=v[0];
		for(int i=1; i<n; i++) m = min(m,v[i]);
		for(int i=0; i<n; i++) if(v[i]==m) c++;
		cout<<m*(n-c)<<"\n";
	}
	
	return 0;
}
