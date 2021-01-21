/*
*    @Date    : 2021-01-21 22:17:06
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

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ans = 1;
        cin >> n;
        for (int i = 0; i < n - 1; i++)
            ans <<= 1, ans %= mod;
        cout << ans << '\n';
    }
    return 0;
}
