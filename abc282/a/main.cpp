#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int k;
    cin >> k;
    string s = "A";
    for (int i = 1; i < k; i++)
    {
        /* code */
        char a = 'A' + i;
        s += a;
    }
    cout << s << endl;
    
}
