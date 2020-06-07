#include<iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long n,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		long temp=n,rev=0;
		while(temp>0)
		{
			rev=(rev*10)+(temp%10);
			temp/=10;
		}
		if(rev==n) cout<<"wins\n";
		else cout<<"losses\n";
	}
	return 0;
}
