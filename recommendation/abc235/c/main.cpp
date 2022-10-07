#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector<long> v(n);
    vector<vector<long>> v2(q, vector<long>(2));
    map<long, vector<int>> m;
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        v[i] = input;
        m[input].push_back(i);
    }
    for (int i = 0; i < q; i++)
    {
        cin >> v2[i][0] >> v2[i][1];
    }
    for (auto i : v2)
    {
        int x = i[0];
        int k = i[1] - 1;
        int ans = 0;
        int size = m[x].size();

        if (k > size - 1)
        {
            ans = -2;
        }
        else
        {
            ans = m[x].at(k);
        }
        cout << ans + 1 << endl;
    }
}
