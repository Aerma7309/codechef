#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long t,q;
	double p;
	cin>>t;
	while (t--)
	{
		cin>>q>>p;
		cout<<fixed;
		if(q>1000) cout<<setprecision(6)<<(q*p*0.9)<<"\n";
		else cout<<setprecision(6)<<q*p<<"\n";
	}
	
	return 0;
}
