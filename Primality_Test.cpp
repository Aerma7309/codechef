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
	int n,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		if(isPrime(n)) cout<<"yes\n";
		else cout<<"no\n";
	}
	return 0;
}
