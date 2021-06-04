/*
*    @Date    : 2021-06-04 21:53:24
*    @Author  : aerma7309 
*/

#include <bits/stdc++.h>
using namespace std;
int FastIO = []()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
#define int long long

void solve()
{
    int D, d, P, Q, n, sum = 0, r;
    cin >> D >> d >> P >> Q;
    n = D / d;
    r = D % d;
    sum = (n * d * (2 * P + (n - 1) * Q)) / 2;
    sum += (P + n * Q) * r;
    cout << sum << '\n';
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
