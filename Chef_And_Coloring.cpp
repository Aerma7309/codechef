#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,c;
	cin>>t;
	while (t--)
	{
		cin>>n;
		string s;
		cin>>s;
		c=0;
		if(c<(n=count(begin(s),end(s),'R'))) c=n;
		if(c<(n=count(begin(s),end(s),'G'))) c=n;
		if(c<(n=count(begin(s),end(s),'B'))) c=n;
		cout<<s.size()-c<<endl;
	}
	
	return 0;
}
