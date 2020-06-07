#include<iostream>
#include<vector>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while (t--)
	{
		int n,count = 0;
		cin>>n;
		vector<int> A(n+1),B(n+1);
		A[0] = 0;
		B[0] = 0;
		for(int i = 1; i <= n; i++) cin>>A[i];
		for(int i = 1; i <= n; i++) cin>>B[i];
		for(int i = 1; i <= n; i++) if((A[i] - A[i-1]) >= B[i]) count++;
		cout<<count<<"\n";
	}
	
	return 0;
}
