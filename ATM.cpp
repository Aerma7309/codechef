#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int withdraw;
	double balance;
	cin>>withdraw>>balance;
	if(withdraw%5 == 0 && balance > (withdraw+0.50) )
	balance = balance - (withdraw + 0.50);
	cout<<fixed;
	cout<<setprecision(2)<<balance;
	return 0;
}
