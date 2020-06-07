#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int n)
{
	int count = 0;
	for(int i = 1; i < static_cast<int>(sqrt(n) + 1); i++)
		if(n%i==0) 
		{
			count++;
			if(count>1) return false;
		}
	return true;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while (t--)
	{
		int a,b;
		cin>>a>>b;
		int i;
		for( i=a+b+1; isPrime(i)!=true; i++);
		cout<<i-(a+b)<<"\n";
	}
	return 0;
}
