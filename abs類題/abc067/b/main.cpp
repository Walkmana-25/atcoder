#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        v.push_back(input);
    }
    sort(v.begin(), v.end(), greater<int>());
    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += v[i];
    }
    cout << sum << endl;
    
    
}
