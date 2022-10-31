#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll n, m;
    cin >> n >> m;
    ll ans = 0;
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= n; j++)
        {
            if(i + j < m){
                ll k = min(m - i - j, n);
                if(k <= 0) continue;
                ans += k;
            }

            
        }
        
    }
    cout << ans << endl;
    
    
}
