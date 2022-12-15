#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int ans = INT_MAX;
    int a,b,c,x,y;
    cin >> a >> b >> c >> x >> y;

    for (ll i = 0; i < 100001; i++)
    {
        int total = a * max(x - i, 0LL) + b * max(y - i, 0LL) + 2 * c * i;
        ans = min(total, ans);
    }
    cout << ans << endl;
    
}
