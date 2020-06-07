#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long n;
	cin>>n;
	int N[n];
	for (int i = 0; i < n; i++) cin>>N[i];
	sort(N,N+n);
	for (int i = 0; i < n; i++) cout<<N[i]<<"\n";
	
	return 0;
}
