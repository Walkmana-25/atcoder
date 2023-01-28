#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int n;
    cin >> n;
    vector<int> v(n + 1);

    cin >> v.at(0) >> v.at(1);

    for (int i = 2; i < n; i++)
    {
        /* code */
        v.at(i) = (v.at(i - 1) + v.at(i - 2)) % 100;

    }

    cout << v.at(n - 1) << endl;
    
}
