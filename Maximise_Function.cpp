/*
*    @Date    : 2021-02-06 00:34:55
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
#define int long long

void solve()
{
    int n, ans = -1e9;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    sort(v.begin(), v.end());
    for (int i = 1; i < n - 1; i++)
        ans = max(ans, abs(v[0] - v[i]) + abs(v[i] - v[n - 1]) + abs(v[n - 1] - v[0]));
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
