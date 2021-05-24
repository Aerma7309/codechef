/*
*    @Date    : 2021-05-08 01:50:26
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
bool won(vector<vector<char>> &b, vector<vector<char>> &bt, char c)
{
    bool res = false;
    for (int i = 0; i < 3; i++)
        res |= (count(b[i].begin(), b[i].end(), c) == 3);
    for (int i = 0; i < 3; i++)
        res |= (count(bt[i].begin(), bt[i].end(), c) == 3);
    if (b[0][0] == c)
        if (b[0][0] == b[1][1] and b[0][0] == b[2][2])
            res = true;
    if (b[2][0] == c)
        if (b[2][0] == b[1][1] and b[2][0] == b[0][2])
            res = true;
    return res;
}

void solve()
{
    int res = 2;
    vector<vector<char>> b(3, vector<char>(3)), bt(3, vector<char>(3));
    map<char, int> m;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> b[i][j], bt[j][i] = b[i][j], m[b[i][j]]++;
    bool x_win = won(b, bt, 'X'), o_win = won(b, bt, 'O');
    if ((x_win and o_win) or (x_win and m['X'] != m['O'] + 1) or (o_win and m['X'] != m['O']) or not(m['X'] == m['O']  or m['X'] - m['O'] == 1))
        res = 3;
    else if ((x_win and m['X'] == m['O'] + 1) or (o_win and m['X'] == m['O']) or (m['X'] == 5 and m['O'] == 4))
        res = 1;
    cout << res << '\n';
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
