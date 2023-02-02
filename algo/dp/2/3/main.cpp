#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(3, 0));

    for (int i = 0; i < n; i++)
    {
        /* code */
        auto it = a.begin() + i;
        cin >> it->at(0) >> it->at(1) >> it->at(2);
    }

    vector<vector<int>> dp(n, vector<int>(3, 0));
    dp.at(0) = a.at(0);

    for (int i = 1; i < n; i++)
    {

        for (int k = 0; k < 3; k++)
        {
            /* code */

            /* code */
            int high = 0;
            for (int j = 0; j < 3; j++)
            {
                /* code */
                if (k == j)
                {
                    continue;
                }
                high = max(dp.at(i - 1).at(j), high);
            }
            dp.at(i).at(k) = high + a.at(i).at(k);
        }
    }
    auto it = dp.end() - 1;
    cout << *max_element(it->begin(), it->end()) << endl;
}
