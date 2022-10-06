#include <bits/stdc++.h>
using namespace std;
int main(){
    int w,a,b;
    cin >> w >> a >> b;
    //a < bのとき
    int ans = -1;
    if(a < b){
        ans = b - (a + w);
    }else if(a > b){
        ans = a - (b + w);
    }
    if(ans < 0){
        ans = 0;
    }
    cout << ans << endl;
}