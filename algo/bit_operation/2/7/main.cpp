#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int m;
    cin >> m;
    int n = pow(2, m);
    cerr << n << endl;
    vector<char> ans;

    while(n != 0){
        int tmp = n % 2;
        ans.push_back(char(tmp));
        n -= tmp;
        n /= 2;

    }
    for (int i = ans.size() - 1; i >= 0; i--)
    {
        /* code */
        cout << int(ans[i]);
    }
    cout << endl;
    
}
