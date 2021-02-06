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
    int mx = *max_element(v.begin(), v.end());
    int mn = *min_element(v.begin(), v.end());
    cout << 2 * (mx - mn) << '\n';
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
