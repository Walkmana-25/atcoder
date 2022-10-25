#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> v(2, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        cin >> v[0][i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> v[1][i];
    }


    int ans = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            if (j <= i)
            {
                sum += v[0][j];
            }
            if (j >= i)
            {
                sum += v[1][j];
            }
        }

        if (sum > ans)
        {
            ans = sum;
        }
        sum = 0;
    }
 
    cout << ans << endl;
}
