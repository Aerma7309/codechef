#include<iostream>
#include<vector>
using namespace std;
auto input = [] (){
	char c;
	do
	{
		c = getchar_unlocked();
	}while (c < 33);
	return	c - '0';
};
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n;
	t = input();
	while (t--)
	{
		n = input();
		vector< vector < int > > M(n,vector<int>());
		for(int i = 0; i < n; i++)
		for(int j= 0; j <= i; j++)
		M[i].push_back(input());

		for(int i = n-2; i >= 0; i--)
		for(int j= 0; j <= i; j++)
		M[i][j]+=max(M[i+1][j],M[i+1][j+1]);

		cout<<M[0][0]<<"\n";
	}
	return 0;
}
