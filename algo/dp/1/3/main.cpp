#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int n;
    cin >> n;
    vector<int> v(n + 1);

    v.at(0) = 1;
    v.at(1) = 1;
    

    for(int i = 2; i <= n; i++){
        v.at(i) = v.at(i - 1) + v.at(i - 2);

    }

    cout << v.at(n) << endl;
}
