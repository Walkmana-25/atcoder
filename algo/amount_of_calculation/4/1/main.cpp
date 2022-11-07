#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> sum(n + 1);
    sum[0] = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum[i + 1] = sum[i] + a[i];
    }

    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int input;
        cin >> input;
        cout << sum[input] << "\n";
    }
    
    
}
