#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,flag;
	cin>>t;
	while (t--)
	{
		string S;
		flag = 1;
		cin>>S;
		int i = 0, j = S.size(),n = j/2;
		if(j%2 == 0) j = j/2;
		else j = j/2 + 1;
		sort(&S[i],&S[n]);
			sort(&S[j],&S[S.size()]);
		for(i = 0; i < n; i++,j++)
		{
			if (S[i] != S[j])
			{
				flag = 0;
				break;
			}
		}
		if(flag == 1) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}
