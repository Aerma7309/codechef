/*
* @Date    : 2020-06-08 13:36:42
* @Author  : Abhimanyu Kumar Maurya (aerma7309@gmail.com)
*/
#include <bits/stdc++.h>
using namespace std;

bool ib = ios_base::sync_with_stdio(0);
bool it = cin.tie(0);
#define int long long
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int ts, t, cnt = 0;
        cin >> ts;
        t = ts;
        while (ts % 2 == 0)
            cnt++, ts >>= 1;
        cout << (t / (1 << (cnt + 1))) << '\n';
    }
    return 0;
}
