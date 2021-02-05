/*
*    @Date    : 2021-02-06 00:16:00
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
    int n;
    cin >> n;
    bool flag = true;
    for (int i = 10; i > 0 and flag; i--)
        if (n % i == 0)
            cout << i, flag = false;
    return 0;
}
