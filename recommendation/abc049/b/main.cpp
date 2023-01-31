#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int h, w;
    cin >> h >> w;

    vector<string> ans;
    for (int i = 0; i < h; i++)
    {
        /* code */
        string s;
        cin >> s;
        ans.push_back(s);
        ans.push_back(s);
    }
    for(auto a : ans){
        cout << a << "\n";
    }
    
}
