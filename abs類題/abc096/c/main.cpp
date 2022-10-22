#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int h, w;
    cin >> h >> w;
    vector<vector<string>> v(h, vector<string>(w));
    for (int i = 0; i < h; i++)
    {
        string input;
        cin >> input;
        for (int j = 0; j < w; j++)
        {
            v[i][j] = input[j];
        }
    }
    bool ans = true;

    for (int i = 0; i < h; i++)
    {
        bool can = false;
        for (int j = 0; j < w; j++)
        {
            can = false;
            if (v[i][j] == "#")
            {
                vector<int> hh = {-1, 0, 1};
                vector<int> ww = {-1, 0, 1};
                for (auto k : hh)
                {
                    for (auto l : ww)
                    {
                        if(k == 0 && l == 0){
                            continue;
                        }
                        if(k != 0 && l != 0){
                            continue;
                        }
                        string s = "";
                        if (k + i < 0 || k + i >= h || l + j < 0 || l + j >= w)
                        {
                            continue;
                        }
                        s = v.at(k + i).at(l + j);
                        if (s == "#")
                        {
                            can = true;
                        }
                    }
                }
                if (!can)
                {
                    ans = false;
                }
            }
        }
    }
    if (ans)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
