#include <bits/stdc++.h>
using namespace std;

bool solve(int s, int e)
{
	if (s > e)
		return false;
	int mid = (s + e) / 2;
	cout << mid << endl;
	string response1, response2, result;
	getline(cin, response1);
	if (response1 == "E")
		exit(0);
	// return true;
	cout << mid << endl;
	getline(cin, response2);
	if (response1 == response2)
	{
		if (response1 == "G")
			return solve(s, mid - 1);
		else
			return solve(mid + 1, e);
	}
	if (solve(s, mid - 1))
		return true;
	if (solve(mid + 1, e))
		return true;
	return false;
}

int main()
{
	string s;
	getline(cin, s);
	// input(s);
	// int n;
	// cin>>n;
	solve(1, stoi(s));
	return 0;
}
