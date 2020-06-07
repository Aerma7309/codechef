#include<iostream>
#include<string>

using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while (t--)
	{
		string s1,s2;
		cin>>s1>>s2;
		int n = max(s1.size(),s2.size()),amin = 0,amax = 0;
		for (int i = 0; i < n; i++)
		{
			if(s1[i] == '?' && s2[i] == '?')  amax++; 
			else if(s1[i] == '?' || s2[i] == '?')   amax++; 
			else if(s1[i] != s2[i]) { amin++; amax++; }
		}
		cout<<amin<<" "<<amax<<"\n";
	}
	
	return 0;
}
