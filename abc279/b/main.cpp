#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    string s,t;
    cin >> s >> t;
    int size = t.size();
    bool ans = false;
    if(s.size() < t.size()){
        cout << "No" << endl;
        return 0;
    }
    for (int i = 0; i <= s.size() - t.size(); i++)
    {
        string ss = s.substr(i, size);
        if(ss == t){
            ans = true;
        }
    }
    if(ans){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    
}
