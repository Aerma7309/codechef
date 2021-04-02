/*
*    @Date    : 2021-03-09 20:13:41
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
void solve()
{
    int n, sum = 0;
    cin >> n;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    for (int i = 1; i <= n; i++)
    {
        if (v[i] > i)
        {
            cout << "Second" << '\n';
            return;
        }
        sum += i - v[i];
    }
    cout << ((sum & 1) ? "First" : "Second") << '\n';
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
