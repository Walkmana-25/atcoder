#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll n;
    cin >> n;
    vector<int> v(n);
    ll s = 0;
    for (ll i = 0; i < n; i++)
    {
        /* code */
        cin >> v[i];
        s += v[i];
    }
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        /* code */
        sum += v[i] * v[i];
    }
    ll ans =(s * s - sum);
    cout << ans / 2 << endl;
    

    
    
}
