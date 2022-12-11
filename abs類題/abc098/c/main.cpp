#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    ll n;
    cin >> n;
    vector<ll> east(1);
    vector<ll> west(1);

    string s;
    cin >> s;
    for (int i = 1; i <= n; i++)
    {
        /* code */
        if(s.at(i - 1) == 'W'){
            west.push_back(1+ west.at(i - 1));
            east.push_back(east.at(i - 1));
        }else{
            west.push_back(west.at(i - 1));
            east.push_back(1 + east.at(i - 1));
        }
    }
    ll ans = -1;
    west.push_back(west.at(n));
    east.push_back(east.at(n));

    for(int i = 1; i <= n; i++){
        ll w = west.at(n) - west.at(i);
        ll e = east.at(i - 1);
        ll tmp = w + e + 1;
        ans = max(ans, tmp);
    }
    cout << n  - ans << endl;
    
}
