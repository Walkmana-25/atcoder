#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<int>> v(m);
    for (int i = 0; i < m; i++)
    {
        int k;
        cin >> k;
        for (int j = 0; j < k; j++)
        {
            int input;
            cin >> input;
            v[i].push_back(input);
        }
        
    }
    bool ans = true;
    for (int i =1; i < n; i++)
    {
        for (int j = 1 + i; j <=n; j++)
        {

            bool ok_1 = false,ok_2 = false;
            for (auto k : v)
            {
                ok_1 = find(k.begin(), k.end(), i) != k.end();
                
                ok_2 = find(k.begin(), k.end(), j) != k.end();
                if(ok_1 && ok_2){
                    break;
                }

            }
            if(!ok_1 || !ok_2){ans = false;}
            
        }
        
    }
    if(ans){cout << "Yes" << endl;}
    else{cout << "No" << endl;}
    
}
