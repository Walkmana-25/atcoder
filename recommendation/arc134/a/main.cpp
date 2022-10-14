#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    long long l,w;
    cin >> n;
    cin >> l >> w;
    vector<long long> v(n + 1, l);
    long long r = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    long long ans = 0L;

    for(auto x: v){
        if(x > r){
            ans += (x - r + w - 1) / w;
            
        }
        r = x + w;
    }
    cout << ans << endl;
    
}
