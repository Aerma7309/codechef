/*
*    @Date    : 2021-01-04 12:55:42
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
    int t, n, k, d;
    cin >> t;
    while (t--)
    {
        cin >> n >> k >> d;
        int sum = 0, temp;
        for (int i = 0; i < n; i++)
            cin >> temp, sum += temp;
        cout << min(sum / k, d) << '\n';
    }
    return 0;
}
