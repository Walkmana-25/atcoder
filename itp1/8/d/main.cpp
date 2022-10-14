#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    string s2;
    getline(cin ,s);
    getline(cin, s2);
    s = s + s;
    auto r = search(s.begin(), s.end(),s2.begin(),s2.end());
    if (r != s.end()){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}
