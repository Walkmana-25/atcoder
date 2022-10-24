#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int n,k;
    cin >> n >> k;
    ll ans = 1;
    for (int i = 0; i < n - 1; i++)
    {
        ans *= (k - 1);
    }
    ans *= k;
    cout << ans << endl;
    
}
