/*
* @Date    : 2020-06-08 00:06:42
* @Author  : Abhimanyu Kumar Maurya (aerma7309@gmail.com)
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, p, c5 = 0, c10 = 0, c15 = 0;
        cin >> n;
        vector<int> v(n);
        for (auto &i : v)
            cin >> i;
        int i;
        for (i = 0; i < n; i++)
        {
            p = v[i];
            if (p == 5)
                c5++;
            else if (p == 10 and c5 > 0)
            {
                c5--;
                c10++;
            }
            else if (p == 15 and c10 > 0)
            {
                c10--;
                c15++;
            }
            else if (p == 15 and c5 > 1)
            {
                c15++;
                c5 -= 2;
            }
            else
                break;
        }
        if (i == n)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
