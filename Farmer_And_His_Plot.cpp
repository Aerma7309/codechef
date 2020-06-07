#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,a,b,g;
	cin>>t;
	while (t--)
	{
		cin>>a>>b;
		g=__gcd(a,b);
		cout<<(a*b)/(g*g)<<"\n";
	}
	
	return 0;
}
