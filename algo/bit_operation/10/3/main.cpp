#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void input(vector<ll> &v, ll const &n){
    for (ll i = 0; i < n; i++)
    {
        /* code */
        cin >> v.at(i);
    }
    
}
ll count(vector<ll> &v, ll const &ii){
    ll cc = 0;
    for (ll i = 0; i < v.size(); i++)
    {
        /* code */
        if(ii & (1 << i)){
            cc += v.at(i);
        }
    }
    return cc;
    
}
int main(){
    ll n,m;
    cin >> n >> m;

    vector<ll> w(n);
    vector<ll> v(n);

    input(w, n);
    input(v , n);


    ll max_v = 0;



    for (int i = 0; i < (1 << n); i++)
    {
        /* code */
        ll value = count(v, i);
        ll weight = count(w, i);
        if(weight <= m){max_v = max(max_v, value);}

    }

    cout << max_v << endl;
    

}
