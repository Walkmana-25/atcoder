#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k, sum = 0;
    cin >> n >> k;

    while(n > 0){
        n /= k;
        sum++;
    }
    cout << sum << endl;
}
