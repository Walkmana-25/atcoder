#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<vector<long>> v(n, vector<long>(3));
    for (int i = 0; i < n; i++)
    {
        cin >> v[i][0] >> v[i][1] >> v[i][2];
    }
    for (int i = 0; i <= 100; i++)
    {
        for (int j = 0; j <= 100; j++)
        {
            int cx = i, cy = j;
            long h = v[0][2] + abs(v[0][0] - cx) + abs(v[0][1] - cy);
            if(h < 0){continue;}
            bool flag = true;
            for (auto k : v)
            {
                long hh = h - abs(k[0] - (long)(cx)) - abs(k[1] - (long)(cy));
                if(hh < 0){hh = 0;}
                long H = k[2];
                if ((H != hh))
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
            {
                cout << cx << " " << cy << " " << h << endl;
                exit(0);
            }
        }
    }
}

