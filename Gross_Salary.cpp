#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	double sal;
	cin>>t;
	while (t--)
	{
		cin>>sal;
		if(sal < 1500) sal = sal*2;
		else sal = (sal + 500 + sal*0.98);
		cout<<fixed;
		cout<<setprecision(2)<<sal<<"\n";
	}
	
	return 0;
}
