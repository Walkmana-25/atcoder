#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    ll n, q;
    cin >> n;
    map<ll,set<ll>> v;
    cin >> q;
    for (ll i = 0; i < q; i++)
    {
        ll t,a,b;
        cin >> t >> a >> b;
        if(t == 1){
            v[a].insert(b);
        }
        if(t == 2){
            v[a].erase(b);
        }
        if(t == 3){
            bool flag_a, flag_b ;
            if(v[a].find(b) == v[a].end()){
                flag_a = false;
            }else {
                flag_a = true;
            }
            
            if(v[b].find(a) == v[b].end()){
                flag_b = false;
            }else {
                flag_b = true;
            }
            if(flag_a && flag_b){
                cout << "Yes" << endl;
            }else{
                cout << "No" << endl;
            }

        }
    }
    
    
}
