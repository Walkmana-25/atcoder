#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    ll a,b,x;
    cin >> a >> b >> x;
    ll ans = 0;
    ans = ((b / x)) - ((a - 1) / x );
    if(a  ==  0){
        ans = b / x + 1;
    }

    cout << ans << endl;
    
}
