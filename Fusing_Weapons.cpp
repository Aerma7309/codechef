/*
* @Date    : 2020-06-24 14:22:55
* @Author  : Abhimanyu Kumar Maurya (aerma7309@gmail.com)
*/
#include <bits/stdc++.h>
using namespace std;

bool ib = ios_base::sync_with_stdio(0);
bool it = cin.tie(0);

int solve(vector<int> &v, int size, int pos)
{
    if (pos >= size)
        return 0;
    stack<int> stk;
    int ans = INT_MIN, i;
    for (i = pos; i < size + pos; i++)
    {
        if (stk.empty())
            stk.emplace(v[i]);
        else
        {
            if (!stk.empty() and stk.top() == v[i])
            {
                stk.pop();
                int curr = v[i] + 1;
                while (!stk.empty() and stk.top() == curr)
                {
                    curr++;
                    stk.pop();
                }
                stk.emplace(curr);
            }
            else
            {
                if (v[i] < stk.top())
                    stk.emplace(v[i]);
                else
                    break;
            }
        }
    }
    while (!stk.empty())
    {
        ans = stk.top();
        stk.pop();
    }
    int nxtSol = solve(v, size, i);
    return max(ans, nxtSol);
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(2 * n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            v[i + n] = v[i];
        }
        int ans = solve(v, n, 0);
        cout << ans << '\n';
    }

    return 0;
}
