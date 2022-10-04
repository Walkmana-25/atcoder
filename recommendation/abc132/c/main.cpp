#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> ii(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ii[i];
    }
    sort(ii.begin(), ii.end());
    int size = ii.size();
    int ans = ii[size / 2] - ii[size / 2 - 1];
    cout << ans << endl;
    
}
