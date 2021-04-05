/*
*    @Date    : 2021-04-05 09:26:33
*    @Author  : aerma7309 
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
int FastIO = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
int v[] = {0, 20, 36, 51};
void solve()
{
    int n, ans = 0;

    cin >> n;
    ans += (44 * (n / 4)) + v[(n % 4)];
    if (n >= 4)
        ans += (4 * (4 - (n % 4)));
    cout << ans<<'\n';
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
