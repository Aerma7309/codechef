/*
*    @Date    : 2021-05-07 22:43:03
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
const int mod = 1e9 + 7;

vector<int> dp(2, 1);
void solve()
{
    int n;
    cin >> n;
    cout << dp[n] << '\n';
}

signed main()
{
    for (int i = 1; i <= 1e5; i++)
        dp.push_back((dp.back() * 2) % mod);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
