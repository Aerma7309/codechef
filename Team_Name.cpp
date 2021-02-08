/*
*    @Date    : 2021-02-07 00:17:56
*    @Author  : aerma7309 
*/
#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
int FastIO = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();

void solve()
{
    int n;
    cin >> n;
    map<string, set<char>> m;
    string s;
    for (int i = 0; i < n; i++)
        cin >> s, m[s.substr(1)].insert(s[0]);
    int ans = 0;
    for (auto &i : m)
    {
        for (auto &j : m)
        {
            if (i != j)
            {
                vector<char> v;
                set_union(i.second.begin(), i.second.end(), j.second.begin(), j.second.end(), back_inserter(v));
                ans += (v.size() - i.second.size()) * (v.size() - j.second.size());
            }
        }
    }
    cout << ans << '\n';
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
