/*
*    @Date    : 2021-01-04 13:15:10
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

map<int, char> mp;
void init_map()
{
    for (int i = 0; i < 16; i++)
    {
        int t = i, d = 0, val = 1;
        while (t)
            d += (t & 1) * val, val <<= 1, t >>= 1;
        mp[d] = 'a' + d;
    }
}

void solve()
{
    int n;
    cin >> n;
    string ans = "";
    for (int i = 0; i < n / 4; i++)
    {
        int d = 0;
        char inp;
        for (int j = 0; j < 4; j++)
            cin >> inp, d <<= 1, d |= (inp - '0');
        ans.push_back(mp[d]);
    }
    cout << ans << '\n';
}

signed main()
{
    init_map();
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
