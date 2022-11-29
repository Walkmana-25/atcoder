#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int a, m;
    cin >> a >> m;
    bitset<31> bs(a & m);

    if(bs.count()){
        cout << "Yes" << endl;
    }else {
        cout << "No" << endl;
    }
}
