#include<iostream>
#include<vector>
#include<algorithm>
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
		vector<int> V(n);
		for(int i = 0; i < n; i++)
		cin>>V[i];
		sort(V.begin(),V.end());
		cout<<V[0]+V[1]<<"\n";
	}
	
	return 0;
}
