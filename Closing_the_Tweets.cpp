#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,k;
	cin>>n>>k;
	vector<bool> V(n);
	while (k--)
	{
		string s;
		int t;
		cin>>s;;
		if (s=="CLICK")
		{
			cin>>t;
			t--;
			V[t] = !(V[t]);

		}
		else if (s=="CLOSEALL")
		{
			for(int i=0;i<n;i++) V[i]=false;
		}
		cout<<count(V.begin(),V.end(),true)<<"\n";	
	}	
	return 0;
}
