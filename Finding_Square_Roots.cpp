#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cout<<static_cast<int>(sqrt(n))<<"\n";
	}
	return 0;
}
