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
		bool flag = true;
		string s1,s2;
		cin>>s1>>s2;
		for(int i=0; i < s1.size();i++)
		{
			if(s1[i]=='?' || s2[i]=='?' || s1[i]==s2[i]) continue;
			else { flag = false; break; }
		}
		if(flag) cout<<"Yes\n";
		else cout<<"No\n";
	}
	
	return 0;
}
