#include <bits/stdc++.h>
using namespace std;
int main(){
    string a,b,c,d;
    cin >> a >> b >> c;
    d = a + b + c;
    int e;
    e = stoi(d);
    if (e % 4 == 0){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}
