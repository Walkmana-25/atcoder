#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    long long b;
    cin >> b;
    long long n = s.size();
    b--;
    if(b < n){
        cout << s[b] << endl;
    }else{
        cout << s[b % n] << endl;
    }
    
}
