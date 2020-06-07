#include <iostream>
#include <algorithm>
using namespace std;
int main()
{

	int t, n, m, f[50], p[50], s[50];
	cin >> t;
	const int inf = 1e9;
	while (t--)
	{
		cin >> n >> m;
		for (int i = 0; i < m; i++)
			s[i] = inf;
		for (int i = 0; i < n; i++)
			cin >> f[i];
		for (int i = 0; i < n; i++)
			cin >> p[i];
		for (int i = 0; i < n; i++)
		{
			if (s[f[i] - 1] == inf)
				s[f[i] - 1] = p[i];
			else
				s[f[i] - 1] += p[i];
		}
		cout << *min_element(s, s + m) << '\n';
	}
	return 0;
}
