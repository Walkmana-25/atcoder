#include <bits/stdc++.h>
using namespace std;
int main(){
    string s,ans = "";
    char c;
    cin >> s;
    for (int i = 1; i <= s.size(); i++)
    {
        if(i % 2){
            c = s[i - 1];
            ans += c;
        }
    }
    cout << ans << endl;
    
}
