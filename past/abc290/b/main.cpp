#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int n,k, current = 0;
    cin >> n >> k;

    string s, ans = "";
    cin >> s;

    for(int i = 0; i < n; i++){
        if(s.at(i) == 'o'&& current < k){
            current++;
            ans += "o";
        }else {
            ans += "x";
        }

    }
    cout << ans << endl;
}
