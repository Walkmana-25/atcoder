#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int x;
    string p,q;
    cin >> x >> p >> q;

    bitset<3> o(int(x / 100));
    bitset<3> g(int((x / 10) % 10));
    bitset<3> u(int(x % 10));

    int pp = -1;
    if(q == "r"){pp = 2;}
    if(q == "w"){pp = 1;}
    if(q == "x"){pp = 0;}

    if(p == "o"){
        if(o[pp]){
            cout << "Yes" << endl;
            return 0;
        }
    }else if(p == "g"){
        if(g[pp]){
            cout << "Yes" << endl;
            return 0;
        }
    }else if(p == "u"){
        if(u[pp]){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}
