#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int n,k,d;
    cin >> n >> k >> d;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> v.at(i);
    }

    set<ll> s = {-1};
    
    for (__int128 bs = 0; bs < (1 << n); bs++)

    {
        ll count = 0;
        /* code */
        int cc = 0;
        for (int i = 0; i < n; i++)
        {
            /* code */
            if(bs & (1 << i)){
                count += v.at(i);
                cc++;
            }
        }
        
        if((count % (ll)d) == (ll)0 && cc == k){
            s.insert(count);
        }
    }
    for (auto i : s){
        cerr << i << endl;
    }
 
    
    cout << *s.rbegin() << endl;
    
}
