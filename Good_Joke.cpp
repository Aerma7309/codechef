#include<iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,a,b;
	cin>>t;
	while (t--)
	{
		cin>>n;
		int res=0;
		for (int i = 1; i <= n; i++)
		{
			cin>>a>>b;
			res^=i;
		}
		cout<<res<<"\n";
	}
	
	return 0;
}
