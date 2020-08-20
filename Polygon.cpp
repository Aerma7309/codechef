/*
* @Date    : 2020-08-16 19:56:01
* @Author  : Abhimanyu Kumar Maurya (aerma7309@gmail.com)
*/
#include <bits/stdc++.h>
using namespace std;

int FastIO = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();

struct point
{
    double x, y;
    point(int a, int b) : x(a), y(b) {}
    bool operator<(point b)
    {
        return x < b.x || (x == b.x && y < b.y);
    }
};

bool cw(point a, point b, point c)
{
    return a.x * (b.y - c.y) + b.x * (c.y - a.y) + c.x * (a.y - b.y) < 0;
}

bool ccw(point a, point b, point c)
{
    return a.x * (b.y - c.y) + b.x * (c.y - a.y) + c.x * (a.y - b.y) > 0;
}

void convex_hull(vector<point> &v)
{
    if (v.size() < 3)
        return;
    sort(v.begin(), v.end());
    point p1 = v.front(), p2 = v.back();
    vector<point> up, down;
    for (auto &pt : v)
    {
        if (not ccw(p1, pt, p2))
        {
            while (up.size() > 1 and !cw(up[up.size() - 2], up[up.size() - 1], pt))
                up.pop_back();
            up.push_back(pt);
        }
        if (not cw(p1, pt, p2))
        {
            while (down.size() > 1 and !ccw(down[down.size() - 2], down[down.size() - 1], pt))
                down.pop_back();
            down.push_back(pt);
        }
    }
    v.clear();
    for (int i = 0; i < up.size(); i++)
        v.push_back(up[i]);
    for (int i = down.size() - 2; i > 0; i--)
        v.push_back(down[i]);
}

float dist(point a, point b)
{
    return sqrt((b.x - a.x) * (b.x - a.x) + (b.y - a.y) * (b.y - a.y));
}

float perimeter(vector<point> &p)
{
    float res = 0;
    for (int i = 1; i < p.size(); i++)
        res += dist(p[i - 1], p[i]);
    res += dist(p.front(), p.back());
    return res;
}

signed main()
{
    int n, a, b;
    cin >> n;
    vector<point> p;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        p.emplace_back(a, b);
    }
    convex_hull(p);
    cout << setprecision(1) << fixed << perimeter(p) << '\n';
    return 0;
}
