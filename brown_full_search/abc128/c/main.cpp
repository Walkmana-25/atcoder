#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int n, m;
    cin >> n >> m;

    vector<vector<int>> v(m);

    for (int i = 0; i < m; i++)
    {
        /* code */
        int nn;
        cin >> nn;
        for (int j = 0; j < nn; j++)
        {
            /* code */
            int tmp;
            cin >> tmp;
            v.at(i).push_back(tmp - 1);
        }
        
    }

    vector<int> vv(m);

    for (int i = 0; i < m; i++)
    {
        /* code */
        cin >> vv.at(i);
    }


    int ans = 0;

    for (int i = 0; i < (1 << n); i++)
    {
        bool aa = true;

        /* code */
        for(int j = 0; j < m; j++)
        {
            int con = 0;
            /* code */
            for(auto a: v.at(j) )
            {
                /* code */
                if(i & (1 << a)){
                    con++;
                }

            }
            if(con % 2 != vv.at(j)){
                aa = false;
            }


            
        }
        if(aa){
            ans++;
        }
    
    
    
}
cout << ans << endl;
}
