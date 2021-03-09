/*
*    @Date    : 2021-03-09 20:01:08
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
signed main()
{
    int t, c, p, a, b;
    cin >> t;
    while (t--)
    {
        cin >> c;
        p = (int)ceil(log2(c + 1));
        a = ((1 << (p - 1)) - 1);
        b = c ^ a;
        cout << (a * b) << '\n';
    }
    return 0;
}
