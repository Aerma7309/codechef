/*
*    @Date    : 2021-05-07 20:07:26
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
    int n, x, k;
    cin >> n >> x >> k;
    bool res = (x % k == 0) or (x % k == (n + 1) % k);
    cout << (res ? "YES" : "NO") << '\n';
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
