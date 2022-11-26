#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int ans = 0;
    string s;
    cin >> s;
    for(char i : s){
        if(i == 'v'){ans++;}
        else{ans++;ans++;}
    }
    cout << ans << endl;
}
