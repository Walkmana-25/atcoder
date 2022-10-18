#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    ll a1,a2,a3;
    cin >> a1 >> a2 >> a3;
    ll ans = 0;

    ll x = 2 * a2 - a1 - a3;
    if(x < 0){
        if(abs(x) % 2){
            x--;
            ans++;
        }
        ans += abs(x / 2);
    }else{
        ans += abs(x);
    }
    cout << ans << endl;

    

//ll d = (a3 + a1) / 2;
//if(a2 < d){
//    ll ansans = d - a2;
//    if(ansans < ans){
//        ans = ansans;
//    }
//}
//
//
//
//
//
//
//if(a3 > a1){
//    ll b = a2 - a1, c = a3 - a2;
//    //if(b == c){cout << 0 << endl;exit(0);}
//    if(b < c){
//        ll ansans = c - b;
//        if(ansans < ans){
//            ans = ansans;
//        }
//    }else {
//        ll ansans = b - c;
//        if(ansans < ans){ans = ansans;}
//    }
//    }
//else{
//
//    ll b = a1 - a2, c = a2 - a3;
//    //if(b == c){cout << 0 << endl;exit(0);}
//    if(b < c){
//        ll ansans = c - b;
//        if(ansans < ans){ans = ansans;}
//    }else {
//        ll ansans = b - c ;
//        if(ansans < ans){ans = ansans;}
//    }
//}
//    cout << ans << endl;
}
