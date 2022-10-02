#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<int>> v(m,vector<int>(2));
    for (int i = 0; i < m; i++)
    {
        cin >> v[i][0] >> v[i][1];
    }
    vector<int> ans(n,0);
    for (auto i : v)
    {
        ans[i[0] - 1] += 1;
        ans[i[1] - 1] += 1;
    }
    for(auto i : ans)
    {
        cout << i << endl;
    }
    
    
    
}
