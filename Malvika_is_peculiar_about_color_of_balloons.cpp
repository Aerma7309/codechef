#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,a,b;
	cin>>t;
	while (t--)
	{
		string s;
		cin>>s;
		a = count(s.begin(),s.end(),'a');
		b = s.size() - a;
		cout<<min(a,b)<<"\n";
	}
	
	return 0;
}
