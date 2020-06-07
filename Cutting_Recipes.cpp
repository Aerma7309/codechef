#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,gcd;
	cin>>t;
	while(t--)
	{
		cin>>n>>gcd;
		int A[n]={gcd},temp;;
		for(int i = 1; i < n; i++)
		{
			cin>>temp;
			gcd = __gcd(gcd,temp);
			A[i]=temp;
		}

		for(int i = 0; i < n; i++)
			cout<<A[i]/gcd<<" ";
		cout<<"\n";
	}
	return 0;
}
