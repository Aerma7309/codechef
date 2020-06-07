#include<iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int rev = 0, temp = n;
		while(temp > 0)
		{
			rev = rev * 10 + temp%10;
			temp /=10;
		}
		cout<<rev<<"\n";
	}
	return 0;
}
