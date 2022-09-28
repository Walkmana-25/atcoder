#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    vector<int> m;
    cin >> n >> x;
    int ans = n;
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        x -= input;
        m.push_back(input); 
    }
    int min = *min_element(m.begin(), m.end());

    ans += x / min;
    cout << ans << endl;
    
    
}
