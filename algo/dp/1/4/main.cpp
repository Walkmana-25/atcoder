#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int n;
    cin >> n;
    vector<ll> v(n + 1);

    for (int i = 1; i <= n; i++)
    {
        /* code */
        if(i == 1){
            v.at(i) = 1;
        }else if(i == 2){
            v.at(i) = 2;
        }else if(i == 3){
            v.at(i) = 4;
        }else{
            v.at(i) = v.at(i - 1) + v.at(i - 2) + v.at(i - 3);
        }
        cerr << v.at(i) << endl;
    }
    cout << v.at(n) << endl;
    
}
