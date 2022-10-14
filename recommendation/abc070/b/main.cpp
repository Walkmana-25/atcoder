#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d, ans = 0;
    cin >> a >> b >> c >> d;
    if(b > c){
        ans = b - c;
        if(d < b){
            ans -= (b - d);
        }
    }else if(b < c){
        ans = c - b;
        if(d > b){
            ans -= (d - b);
        }
    }else if(b = c){
        ans = abs(d - a);
    }
    if( ans < 0){cout << "0" << endl;}
    else cout << ans << endl;

}
