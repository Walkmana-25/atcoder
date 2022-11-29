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
    int n, m;
    cin >> n >> m;
    bitset<7> bs(v[n]);
    bitset<7> bs1(v[m]);

    bitset<7> bs2 = (bs ^ bs1);

    cout << bs2.to_ulong() << endl;
}