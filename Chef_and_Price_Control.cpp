/*
* @Date    : 2020-06-07 23:38:44
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
        int n, k, num;
        long long sum = 0;
        cin >> n >> k;
        while (n--)
        {
            cin >> num;
            sum += (num > k) ? num - k : 0;
        }
        cout<<sum<<'\n';
    }
    return 0;
}
