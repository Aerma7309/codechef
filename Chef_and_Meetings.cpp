/*
*    @Date    : 2021-02-06 01:24:46
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

struct Time
{
    int hr, min, meridian, val;
    Time() : hr(0), min(0), meridian(0), val(0) {}
    friend istream &operator>>(istream &cin, Time &t);
};

istream &operator>>(istream &is, Time &t)
{
    string inp, m;
    is >> inp >> m;
    t.hr = stoi(inp.substr(0, 2))%12;
    t.min = stoi(inp.substr(3));
    t.meridian = (m == "AM" ? 0 : 1);
    if (t.meridian)
        t.hr = (t.hr + 12) % 24;
    t.val = t.hr * 60 + t.min;
    return is;
}

int isInRange(Time &s, Time &e, Time &p)
{
    return p.val >= s.val and e.val >= p.val;
}

void solve()
{
    Time p, s, e;
    cin >> p;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s >> e;
        cout << isInRange(s, e, p);
    }
    cout << '\n';
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
