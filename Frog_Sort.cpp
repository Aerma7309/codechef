/*
*    @Date    : 2021-02-06 02:40:57
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
    int n, el, ci, ans = 0;
    cin >> n;
    vector<int> w(n), l(n);
    for (auto &i : w)
        cin >> i;
    for (auto &i : l)
        cin >> i;
    el = find(w.begin(), w.end(), 1) - w.begin();
    for (int i = 2; i <= n; i++)
    {
        ci = find(w.begin(), w.end(), i) - w.begin();
        int t = 0;
        if (ci < el)
            t = ((el - ci) / l[ci] + 1);
        else if (ci == el)
            t = 1;
        ans += t;
        el = ci + t * l[ci];
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
