#include <bits/stdc++.h>
using namespace std;
using ll long long
int main(){
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];

    }
    sort(a.begin(), a.end());
    sum -= a[0];
    cout << sum << endl;
    
    
    
    
}
