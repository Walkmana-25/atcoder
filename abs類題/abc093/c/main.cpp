#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    vector<int> v(3);
    cin >> v[0] >> v[1] >> v[2];
    int ans = 0;
    while(true){
        if(v[0] == v[1] && v[1] == v[2]){break;}
        auto max = max_element(v.begin(), v.end());
        auto min = min_element(v.begin(), v.end());
        ans++;
        if((*max - *min) >= 2){
            *min += 2;
        }else if(v[0] == v[1] || v[1] == v[2] || v[0] == v[2]){
            sort(v.begin(), v.end());
            if(v[0] == v[1]){
                v[0]++;
                v[1]++;
            }else if(v[1] == v[2]){
                v[0] += 2;
            }
        }
    }
    cout << ans << endl;
}
