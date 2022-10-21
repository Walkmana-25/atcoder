#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int n, a, b;
    cin >> n >> a >> b;
    //if(n == 2){
    //    cout << "Draw" << endl;
    //    exit(0);
    //}
    if((b - a) % 2){
        cout << "Borys" << endl;
    }else {
        cout << "Alice" << endl;
    }
}
