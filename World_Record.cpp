/*
*    @Date    : 2021-04-02 20:49:47
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

const int record = 958;
const float dist = 100.0f;

float round2p(float var)
{
    float value = (int)(var * 100 + .5);
    return (float)value / 100;
}

void solve()
{
    float k1, k2, k3, v;
    cin >> k1 >> k2 >> k3 >> v;
    v = round2p(dist / (k1 * k2 * k3 * v));
    int res = v * 100;
    cout << ((res < record) ? "YES\n" : "NO\n");
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
