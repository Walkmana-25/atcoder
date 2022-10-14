#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;

    // xが0より小さいか
    if (x > 0)
    {
        if (y < x)
        {
            if (y < 0)
            {
                cout << x << endl;
                exit(0);
            }
            else if (z < y)
            {
                if (z < 0)
                {
                    cout << abs(x) + abs(z) * 2 << endl;
                    exit(0);
                }
                else
                {
                    cout << x << endl;
                    exit(0);
                }
            }
        }
        else
        {
            cout << x << endl;
            exit(0);
        }
    }
    else
    {
        if (y > x)
        {
            if (y > 0)
            {
                cout << abs(x) << endl;
                exit(0);
            }
            else if (z > y)
            {
                if (z > 0)
                {
                    cout << abs(x) + abs(z) * 2 << endl;
                    exit(0);
                }
                else
                {
                    cout << x << endl;
                    exit(0);
                }
            }
        }
        else
        {
            cout << x << endl;
            exit(0);
        }
    }
    cout << "-1" << endl;
}
