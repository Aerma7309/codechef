/*
*    @Date    : 2021-03-09 18:59:26
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

signed main()
{
    int n, h, x;
    cin >> n >> h >> x;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    cout << (((x + (*max_element(v.begin(), v.end()))) >= h) ? "YES" : "NO") << '\n';
    return 0;
}
