#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int n;
    cin >> n;
    vector<int> sum(n + 1);
    sum[0] = 0;
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        sum[i + 1] = sum[i] + input;
    }
    int q;
    cin >> q;
    vector<vector<int>> v2;
    for (int i = 0; i < q; i++)
    {
        vector<int> vvv(2);
        cin >> vvv[0] >> vvv[1];
        v2.push_back(vvv);
    }
    for(int i = 0; i < q; i++){
        cout << sum[v2[i][1]] - sum[v2[i][0]] << "\n";
    }
    
    
    
}
