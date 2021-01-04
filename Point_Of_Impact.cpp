/*
*    @Date    : 2021-01-04 14:31:50
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
    int n, k, x, y;
    cin >> n >> k >> x >> y;
    k = (k - 1) % 4;
    vector<pair<int, int>> v;
    if (x > y)
        v = {{n, y + n - x}, {y + n - x, n}, {0, x - y}, {x - y, 0}};
    else if (y > x)
        v = {{n + x - y, n}, {n, n + x - y}, {y - x, 0}, {0, y - x}};
    if (v.empty())
        x = y = n;
    else
        x = v[k].first, y = v[k].second;
    cout << x << " " << y << '\n';
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
