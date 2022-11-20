#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    ll all_num = 0;
    ll n, q;
    cin >> n;
    vector<ll> v;
    for (ll i = 0; i < n; i++)
    {
        /* code */
        ll input;
        cin >> input;
        v.push_back(input);
    }
    cin >> q;

    for(ll i = 0; i < q ; i++){
        ll q1,q2,q3;
        cin >> q1;
        if(q1 == 2){
            cin >> q2 >> q3;
        }else{
            cin >> q2;
        }
        if(q1 == 1){
            vector<ll> vv(n);
            v = vv;
            all_num = q2;
        }
        else if(q1 == 2){
            v[q2 - 1] += q3;
        }
        else if(q1 == 3){
            cout << v[q2 - 1] + all_num << endl;
        }
    }

    
}
