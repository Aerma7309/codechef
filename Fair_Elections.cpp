/*
*    @Date    : 2021-01-04 14:03:00
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
    int a, b, johnSum = 0, jackSum = 0, diff, cnt = 0;
    cin >> a >> b;
    vector<int> john(a), jack(b);
    for (auto &i : john)
        cin >> i, johnSum += i;
    for (auto &i : jack)
        cin >> i, jackSum += i;
    sort(john.begin(), john.end());
    sort(jack.begin(), jack.end());
    for (int i = 0; i < min(a, b) and jackSum >= johnSum; i++)
    {
        diff = jack[b - i - 1] - john[i];
        if (diff > 0)
            jackSum -= diff, johnSum += diff, cnt++;
        else
            break;
    }
    cout << (jackSum < johnSum ? cnt : -1) << '\n';
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
