#include<iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,o,m,k;
	cin>>t;
	while (t--)
	{
		cin>>o>>m>>k;
		int temp = max(o,m) - min(o,m);
		if(temp <= k) cout<<"0\n";
		else cout<< temp - k<<"\n";
	}
	
	return 0;
}
