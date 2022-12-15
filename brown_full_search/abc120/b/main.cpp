#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int a, b, k;
    cin >> a >> b >> k;
    vector<int> v;
    for (int i = 1; i <= max(a, b); i++)
    {
        if(a % i == 0 && b % i == 0){
            v.push_back(i);
        }
    }
    sort(v.begin(),v.end(), greater<int>());
    cout << v.at(k - 1) << endl;
    
}
