#include<iostream>
using namespace std;
int sum(int n)
{
	if(n == 0) return 0;
	return n + sum( n- 1 );
}

int puppysum(int d, int n)
{
	int result = n;
	for (int i = 0; i < d; i++)
	result = sum(result);
	return result;	
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,d,n;
	cin>>t;
	while (t--)
	{
		cin>>d>>n;
		cout<<puppysum(d,n)<<"\n";

	}
	
	return 0;
}
