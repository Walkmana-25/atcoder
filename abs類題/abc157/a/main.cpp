#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, ans = 0;
    cin >> n;
    ans = n / 2;
    if(n % 2){ans++;}
    cout << ans << endl;
}
