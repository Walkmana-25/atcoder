#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int n, m;
    cin >> n >> m;
    vector<int> v(n);

    for (int i = 0; i < m; i++)
    {
        /* code */
        cin >> v.at(i);
    }

    vector<bool> dp(n + 1, false);

    dp.at(0) = true;
    for (int i = 1; i <= n; i++)
    {
        /* code */
        for (int j = 0; j < m; j++)
        {
            if(i - v.at(j) >= 0){
                if(dp.at(i - v.at(j)) == true){
                dp.at(i) = true;
                }
            }
        }
        
    }
    if(dp.at(n)){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    
    
}
