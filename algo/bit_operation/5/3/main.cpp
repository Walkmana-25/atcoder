#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int a, i;
    cin >> a >> i;
    int b = 1;
    b <<= i;
    cout << (a ^ b) << endl;
    
}
