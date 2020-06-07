#include<iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long t,a,b;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		if(a<b) cout<<"<\n";
		else if(a>b) cout<<">\n";
		else cout<<"=\n";
	}
	return 0;
}
