/*
*    @Date    : 2021-01-30 20:30:27
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

vector<int> bit;

void point_update(int i, int k)
{
    while (i < bit.size())
    {
        bit[i] += k;
        i += (i & (-i));
    }
}

void range_update(int lb, int ub, int k)
{
    point_update(lb, k);
    point_update(ub + 1, -k);
}

int point_query(int i)
{
    int res = 0;
    while (i > 0)
    {
        res += bit[i];
        i -= (i & (-i));
    }
    return res;
}

signed main()
{
    int n, m, c, lb, ub, k;
    cin >> n >> m >> c;
    bit.resize(n + 1);
    char ch;
    for (int i = 0; i < m; i++)
    {
        cin >> ch;
        if (ch == 'Q')
        {
            cin >> lb;
            cout << point_query(lb) + c << '\n';
        }
        else
        {
            cin >> lb >> ub >> k;
            range_update(lb, ub, k);
        }
    }
    return 0;
}
