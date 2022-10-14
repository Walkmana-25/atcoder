#include <bits/stdc++.h>
using namespace std;
int main(){
    string s,ss = "CODEFESTIVAL2016";
    int ans = 0;
    cin >> s;
    for (int i = 0; i < 16; i++)
    {
        if(s[i] != ss[i]){
            ans++;
        }
    }
    cout << ans << endl;
    
}
