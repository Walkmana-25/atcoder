#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    ll n, x;
    cin>>n>>x;
    int ans = n & (1 << x);
    if(ans){
        cout << "Yes" << endl;
    }else {
        cout << "No" << endl;
    }
}
