#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;
    for (int i = 0; i < n - 2; i++)

    {
        /* code */
        if(s.at(i) == 'A' && s.at(i + 1) == 'B' && s.at(i + 2) == 'C'){
            ans++;
        }
    }
    cout << ans << endl;
    
}
