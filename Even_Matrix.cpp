/*
* @Date    : 2020-06-08 14:01:51
* @Author  : Abhimanyu Kumar Maurya (aerma7309@gmail.com)
*/
#include <bits/stdc++.h>
using namespace std;

bool ib = ios_base::sync_with_stdio(0);
bool it = cin.tie(0);

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, cnt = 0;
        cin >> n;
        vector<vector<int>> arr(n, vector<int>(n));
        int cl = 0, rl = 0, ch = n, rh = n;
        while (rl < rh and cl < ch)
        {
            for (int x = cl; x < ch; x++)
                arr[rl][x] = ++cnt;
            rl++;
            for (int x = rl; x < rh; x++)
                arr[x][ch - 1] = ++cnt;
            ch--;
            for (int x = ch - 1; x >= cl; x--)
                arr[rh - 1][x] = ++cnt;
            rh--;
            for (int x = rh - 1; x >= rl; x--)
                arr[x][cl] = ++cnt;
            cl++;
        }
        for (auto &i : arr)
        {
            for (auto &j : i)
                cout << j << " ";
            cout << '\n';
        }
    }
    return 0;
}
