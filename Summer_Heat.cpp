/*
*    @Date    : 2021-06-04 21:38:20
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

void solve()
{
    int xa, xb, Xa, Xb;
    cin >> xa >> xb >> Xa >> Xb;
    cout << (Xa / xa + Xb / xb) << '\n';
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
