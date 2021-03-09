/*
*    @Date    : 2021-03-09 18:45:00
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
    string s;
    cin >> s;
    int ans = s[0] - '0';
    for (int i = 1; i < s.size(); i++)
        if (s[i] == '1' and s[i - 1] == '0')
            ans++;
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
