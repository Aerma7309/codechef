#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while (t--)
	{
		bool flag =false;
		string S;
		cin>>S;
		vector <int> V[26];
		for(int i = 0; i < S.size(); i++) 
		{
			if(S.size()%2==1) break;
			int t = count(S.begin(),S.end(),S[i]);
			if(t==S.size()/2) {
				flag = true;
				break;
			}
		}
		if(flag) cout<<"YES\n";
		else cout<<"NO\n";
	}	
	return 0;
}