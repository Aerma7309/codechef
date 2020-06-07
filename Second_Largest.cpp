#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long t;
	cin>>t;
	while(t--)
	{
		long A[3];
		cin>>A[0]>>A[1]>>A[2];
		sort(A,A+3);
		cout<<A[1]<<"\n";
	}
	return 0;
}
