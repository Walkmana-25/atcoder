#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<int>> v(n , vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        /* code */
        string s;
        cin >> s;
        for (int j = 0; j < m; j++)
        {
            /* code */
            if(s.at(j) == 'o'){
                v.at(i).at(j) = 1;
            }
        }
        
    }


    int ans = 0;

    for (int i = 0; i < n - 1; i++)
    {
        /* code */
        for (int j = i + 1; j < n; j++)
        {
            bitset<31> bs;
            /* code */
            for (int k = 0; k < m; k++)
            {
                /* code */
                if(v.at(i).at(k)){
                    bs.set(k);
                }
                if(v.at(j).at(k)){
                    bs.set(k);
                }
            }
            
            if(bs.count() == m){
                ans++;
            }
        }
        
    }




    cout << ans << endl;
    
    
    
}
