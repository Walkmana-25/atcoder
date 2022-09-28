#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    char f,e;
    int n = 0;
    cin >> s;
    f = s[0];
    e = s[s.size() - 1];
    n = s.size() - 2;
    cout << f << n << e << endl;
}
