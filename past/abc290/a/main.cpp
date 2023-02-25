#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int n,m;
    cin >> n >> m;

    vector<int> v(n + 1);

    for (int i = 1; i <= n; i++)
    {
        /* code */
        cin >> v.at(i);
    }

    int ans = 0;
    for (int i = 0; i < m; i++)
    {
        /* code */
        int input;
        cin >> input;

        ans += v.at(input);
    }
    cout << ans << endl;
    
    
}
