#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    vector<string> v = {
        "1110111", "0100100", "1011101",
        "1101101", "0101110", "1101011",
        "1111011", "0100111", "1111111",
        "1101111"
    };
    int n;
    cin >> n;
    bitset<7> bs(v[n]);

    cout << bs.to_ulong() << endl;
}
