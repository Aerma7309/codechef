/*
*    @Date    : 2021-04-02 21:16:04
*    @Author  : aerma7309 
*/

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
    int n, k, cnt = 0, ans = 0;
    cin >> n >> k;
    string s;
    cin >> s;
    for (auto &ch : s)
        if (ch == '*')
            ++cnt, ans = max(cnt, ans);
        else
            cnt = 0;
    cout << ((ans >= k) ? "YES\n" : "NO\n");
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
