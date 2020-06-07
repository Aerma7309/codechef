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
		int temp = n, count = 0;
		while(temp > 0)
		{
			if(temp%10 == 4) count++;
			temp/=10;
		}
		cout<<count<<"\n";
	}
	return 0;
}
