#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string l,w;
	cin>>l;
	int t;
	cin>>t;
	while (t--)
	{
		cin>>w;
		bool flag = true;
		for (int i = 0; i <static_cast<int> (w.size()); i++)
			if (l.find(w[i]) != l.npos)
				;
			else
			{
				flag = false;
				break;
			}
		if (flag)
			cout << "Yes\n";
		else
			cout << "No\n";
	}
	
	return 0;
}
