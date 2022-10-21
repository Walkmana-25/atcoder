#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int n;
    cin >> n;
    map<int, bool> m;
    set<int> key;
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        key.insert(input);
        if(m[input] == true){
            m[input] = false;
        }else{m[input] = true;}
    }
    int ans = 0;
    for(auto i : key){
        if(m[i]){
            ans++;
        }
    }
    cout << ans << endl;
    
    
}
