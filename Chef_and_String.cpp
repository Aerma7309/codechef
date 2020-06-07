/*
* @Date    : 2020-06-07 23:50:32
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
        string s;
        cin >> s;
        int cnt = 0;
        for (int i = 0; i < s.size() - 1;)
        {
            if ((s[i] == 'x' and s[i + 1] == 'y') or (s[i] == 'y' and s[i + 1] == 'x'))
            {
                cnt += 1;
                i += 2;
            }
            else
                i += 1;
        }
        cout << cnt << '\n';
    }

    return 0;
}
