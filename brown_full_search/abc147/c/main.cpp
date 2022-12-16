#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int n;
    cin >> n;
    vector<vector<pair<int, int>>> v(n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        int a;
        cin >> a;
        for (int j = 0; j < a; j++)
        {
            /* code */
            pair<int, int> p;
            cin >> p.first >> p.second;
            v.at(i).push_back(p);
        }
    }

    int ans = 0;

    for (int bs = 0; bs < (1 << n); bs++)
    {
        bool conflict = false;
        for (int i = 0; i < n; i++)
        {
            /* code */
            if(bs & (1 << i)){
                for (int j = 0; j < v.at(i).size(); j++)
                {
                    /* code */
                    if(bs & (1 << v.at(i).at(j).first - 1) && v.at(i).at(j).second){
                        continue;
                    }else if (!(bs & (1 << v.at(i).at(j).first - 1)) && !(v.at(i).at(j).second)){
                        continue;
                    }
                    else{
                        conflict = true;
                    }
                }
                
            }
        }
        
        if(!conflict){
            bitset<15> bs1(bs);
            ans = max(ans, int(bs1.count()));

        }
        

    }

    cout << ans << endl;
}
