#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll n;
    cin >> n;

    for (int bs = 0; bs < (1 << 9); bs++)
    {
        /* code */
        vector<ll> v = {1};
        for (int i = 2; i <= 9; i++)
        {
            /* code */
            if(bs & (1 << (i - 1))){

                *v.rbegin() = i * *v.rbegin();
            }else{
                v.push_back(i);
            }
        }
        ll sum = 0;
        for (int i = 0; i < v.size(); i++)
        {
            /* code */
            sum += v.at(i);
        }
        
        cerr << sum << endl;


        if(n == sum){
            cout << "Yes" << endl;
            return 0;
        }
        
        
    }
    cout << "No" << endl;
    
}
