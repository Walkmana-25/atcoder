#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<double> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    double max = 0;
    sort(v.begin(), v.end());

    do
    {
        
        vector<double> vv;
        copy(v.begin(), v.end(), back_inserter(vv));
        //for(auto i : vv){cout << i << '\n';}


        for (int i = 0; i < n - 1; i++)
        {
            vv.push_back((double)(vv[0] + vv[1]) / 2);
            vv.erase(vv.begin(), vv.begin() + 2);
            //for(auto i : vv){cout << i << '\n';}
        }
        
        double a = vv[0];
        if (max < a)
        {
            max = a;
        }
    } while (next_permutation(v.begin(), v.end()));
    cout << max << endl;
}
