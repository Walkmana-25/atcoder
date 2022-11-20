#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < k; i++)
    {
        v.erase(v.begin());
        v.push_back(0);
    }
    for(int i: v){
        cout << i << " ";
    }
    cout << endl;
    
    
}
