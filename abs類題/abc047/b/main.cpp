#include <bits/stdc++.h>
using namespace std;
int main()
{
    int w, h, n;
    cin >> w >> h >> n;
    vector<vector<int>> f(n, (vector<int>(3)));
    vector<vector<bool>> v(h, (vector<bool>(w, false)));
    //横に下から積みあがってるスタイル
    for (int i = 0; i < n; i++)
    {
        cin >> f[i][0] >> f[i][1] >> f[i][2];
    }
    for (int i = 0; i < n; i++)
    {
        int x = f[i][0], y = f[i][1], a = f[i][2];
        if (a == 1)
        {
            for (int j = 0; j < h; j++)
            {
                for (int k = 0; k < x; k++)
                {
                    v[j][k] = true;
                }
            }
        }
        else if (a == 2)
        {
            for (int j = 0; j < h; j++)
            {
                for (int k = x; k < w; k++)
                {
                    v[j][k] = true;
                }
            }
        }
        else if (a == 3)
        {
            for (int j = 0; j < y; j++)
            {
                for (int k = 0; k < w; k++)
                {
                    v[j][k] = true;
                }
            }
        }
        else if (a == 4)
        {
            for (int j = y; j < h; j++)
            {
                for (int k = 0; k < w; k++)
                {
                    v[j][k] = true;
                }
            }
        }
    }
    int ans = 0;
    for(auto i : v){
        for (auto j : i)
        {
            if (j == false)
            {
                ans++;
            }
        }
    }
    cout << ans << endl;
}
