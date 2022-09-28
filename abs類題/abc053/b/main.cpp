#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    auto ans = s.find("A");
    auto ans2 = s.rfind("Z");
    cout << ans2 - ans + 1 << endl;

}
