#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;
    bool c_ab = false;
    bool a_ab = false;
    bool b_ab = false;

    if ((2 * c) > (a + b))
    {
        c_ab = true;
    }
    if (a > c * 2)
    {
        a_ab = true;
    }
    if (b > c * 2)
    {
        b_ab = true;
    }
    int ans = 0;
    if (c_ab)
    {
        ans += x * a;
        ans += y * b;
    }
    else
    {
        if (x < y)
        {
            if (b_ab)
            {
                ans += y * 2 * c;
            }
            else
            {
                int d = y - x;
                ans += d * b;
                ans += x * 2 * c;
            }
        }
        else if (a_ab)
        {
            ans += x * 2 * c;
        }
        else
        {
            int d = x - y;
            ans += d * a;
            ans += y * 2 * c;
        }
    }
    cout << ans << endl;
}
