#include<iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long t,a,b;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		cout<<max(a,b)<<" "<<a+b<<"\n";
	}
	return 0;
}
