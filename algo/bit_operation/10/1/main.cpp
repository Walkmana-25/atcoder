#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int n, x;
    cin >> n >> x;
    bitset<21> bs(x);

    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> v[i];
    }

    ll ans = 0;
    for (int i = 0; i < 21; i++)
    {
        /* code */
        if(bs.test(i)){

            ans += v[i];
        }
    }
    
    cout << ans << endl;
}
