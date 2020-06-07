#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,d;
	cin>>t;
	while (t--)
	{
		string S;
		cin>>d;
		cin>>S;
		if(*find(S.begin(),S.end(),'I') == 'I') cout<<"INDIAN\n";
		else if(*find(S.begin(),S.end(),'Y') == 'Y') cout<<"NOT INDIAN\n";
		else cout<<"NOT SURE\n";
	}
	
	return 0;

}
