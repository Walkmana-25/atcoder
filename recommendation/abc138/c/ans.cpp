#include <bits/stdc++.h>
using namespace std;
int main(){
        int n;
    cin >> n;
    vector<double> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    double max = v[0];
    for (int i = 0; i < n; i++)
    {
        max = (max + v[i]) / 2;
    }
    cout << max << endl;
    
}
