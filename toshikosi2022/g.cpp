#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int s, t, x;
    cin >> s >> t >> x;
    

    int a = s * 60, b = t * 60;
    if(a < x * 60 + 30 && x * 60 + 30 < b){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}
