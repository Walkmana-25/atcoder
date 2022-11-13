#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(2));
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> v[i][0] >> v[i][1];
    }
    sort(v.begin(), v.end());
    vector<int> ans;
    ans.push_back(1);
    for (auto a : v)
    {
        for (auto b : ans)
        {
            if (a.at(0) == b)
            {
                ans.push_back(a.at(1));
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        swap(v[i][0], v[i][1]);
    }
    sort(v.begin(), v.end());

    for (auto a : v)
    {
        for (auto b : ans)
        {
            if (a.at(0) == b)
            {
                ans.push_back(a.at(1));
            }
        }
    }
    sort(ans.begin(), ans.end(), greater<int>());
    cout << ans[0] << endl;
}
