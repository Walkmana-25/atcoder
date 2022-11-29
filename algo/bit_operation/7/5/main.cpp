#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int a, m;
    cin >> a >> m;
    if(m == (a & m)){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}
