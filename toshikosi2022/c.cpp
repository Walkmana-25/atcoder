#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int x, y , n;
    cin >> x >> y >> n;

    int ans = 0;
    if(y < 3 * x){
        ans += n / 3 * y;
        ans += n % 3 * x;
    }else{
        ans += n * x;
    }
    cout << ans << endl;
}
