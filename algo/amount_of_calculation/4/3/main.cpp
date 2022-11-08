#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int n;
    cin >> n;
    vector<int> d(n + 1);
    d[0] = 0;
    for (int i = 1; i < n; i++)
    {
        int input;
        cin >> input;
        d[i + 1] = d[i] + input;
    }
    int q;
    cin >> q;
    vector<vector<int>> v(q, vector<int>(2));
    for (int i = 0; i < q; i++){
        cin >> v[i][0] >> v[i][1];
    }

    for (int i = 0; i < q; i++)
    {
        int a = v[i][0] + 1, b = v[i][1] + 1;
        cout << d[b] - d[a] << "\n";
    }
    
    
    
}
