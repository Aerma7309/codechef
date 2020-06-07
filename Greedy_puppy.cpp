#include<iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,k;
	cin>>t;
	while (t--)
	{
		cin>>n>>k;
		int max = 1;
		for (int i = 1; i <= k; i++)
		if(max < n%i) max = n%i; 
		cout<<max<<"\n";
		
	}
	
	return 0;
}
