#include<iostream>
#include<algorithm>
#include<string>

using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	string C;
	while (t--)
	{
		cin>>C;
		bool flag = false;
		int c0,c1;
		c0 = count(C.begin(),C.begin() + C.size(),'0');
		c1 = count(C.begin(),C.begin() + C.size(),'1');
		if(c0 == 1 || c1 == 1) flag = true;
		if(flag) cout<<"Yes\n";
		else cout<<"No\n";
	}	
	return 0;
}
