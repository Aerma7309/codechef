/*
*    @Date    : 2021-04-02 20:23:00
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
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b or b == c or c == a)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}
