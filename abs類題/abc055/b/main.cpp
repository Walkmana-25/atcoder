#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int n;
    cin >> n;
    long long power = 1;
    for (int i = 1; i <= n; i++)
    {
        power = power * ll(i) % (ll)(pow(10, 9) + 7);
    }
    cout << power << endl;
    
}
