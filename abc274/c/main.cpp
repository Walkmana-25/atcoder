#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int n;
    cin >> n;
    vector<int> v(2 * n + 1);
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        v[2 * (i + 1) - 1] = input;
        v[2 * (i + 1)] = input;
    }
    vector<int> ans(2 * n + 1);
    ans[0] = 0;
    for (int i = 1; i < (2 * n + 1); i++)
    {
        ans[i] = ans[v[i]-1] + 1;


        
    }
    for(auto i : ans){
        cout << i << "\n";
    }
    
    
}
