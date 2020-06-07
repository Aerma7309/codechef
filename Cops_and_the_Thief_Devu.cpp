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
		int m,x,y,r,temp = 0;
		cin>>m>>x>>y;
		r = x*y;
		vector<int> H(100,0),P(m,0);
		
		for (int i = 0; i < m; i++) cin>>P[i];
		sort(P.begin(),P.end());
		for(int i = 0; i < m; i++)
		{
			for(int j = P[i];j >= P[i] - (r+1) && j >=  0; j--) H[j] = 1;
			for(int j = P[i]; j<= P[i] +(r-1) && j<=100;  j++)   H[j] = 1;
		}
		for(int i = 0; i < 100; i++) if(H[i] == 0) temp++;
		cout<<temp<<"\n";
	}
	return 0;
}
