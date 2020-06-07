#include<iostream>
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
		int n,m,k;
		cin>>n>>m>>k;
		vector<int> A(m),B(k);
		for(int i = 0; i < m; i++) cin>>A[i];
		for(int i = 0; i < k; i++) cin>>B[i];
		int ct = 0, cui = 0;
		for( int i = 0; i < m; i++) 
		if(find(B.begin(),B.end(),A[i]) != B.end()) ct++;
		for(int i = 0; i < n; i++) 
		if((find(B.begin(),B.end(),i+1) == B.end()) && (find(A.begin(),A.end(),i+1) == A.end())) cui++;
		cout<<ct<<" "<<cui;
		cout<<"\n";
	}
	return 0;
}
