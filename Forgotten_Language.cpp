#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while (t--)
	{
		int n,k,l;
		cin>>n>>k;
		vector<string> D,P;
		string t;
		for(int i = 0; i < n; i++ ) 
		{
			cin>>t;
			D.push_back(t);
		}
		for(int j = 0; j < k; j++)
		{
			cin>>l;
			for(int i = 0; i<l; i++)
			{
				cin >> t;
				P.push_back(t);
			}
		}
		for(int i = 0; i < n; i++)
		{
			if(count(P.begin(),P.end(),D[i]) > 0) cout<<"YES ";
			else cout<<"NO ";
		}
		cout<<"\n";
	}
	
	return 0;
}
