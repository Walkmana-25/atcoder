#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    set<string> keys;
    map<string, int> bucket;
    for(auto i :v){
        bucket[i] = 0;
        keys.insert(i);
    }
    for (auto i:v)
    {
        bucket[i]++;
    }
    vector<int> vv;

    for(auto i:keys){
        vv.push_back(bucket[i]);
    }
    sort(vv.begin(), vv.end());
    int sum = 0;
    if(vv.size() <= k){cout << "0" << endl;exit(0);}
    for (int i = 0; i < vv.size() - k; i++)
    {
        sum += vv[i];
    }
    
    cout << sum << endl;
    

    
}
