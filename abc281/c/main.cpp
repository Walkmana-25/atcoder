#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    ll n,t;
    cin >> n >> t;
    vector<ll> v(n + 1);
    ll time = 0;
    for (ll i = 1; i <= n; i++)
    {
        /* code */
        ll input;
        cin >> input;
        v.at(i) = input + v.at(i - 1);
}
    time = v.at(n);
    ll tt = t % time;

    ll cc = tt / time;


    ll sum = 0;
    for(ll i = 1; i <= n; i++){
        if(tt < v.at(i)){
            cout << i<< " " << tt - v.at(i - 1) << endl;;
            return 0;
        }
        
    }
    cerr << "Error: " << endl;




    
}
