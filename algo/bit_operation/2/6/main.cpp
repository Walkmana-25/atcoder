#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int n;
    cin >> n;
    vector<int> s;
    s.push_back(1);
    for (int i = 0; i < n; i++)
    {
        /* code */
        s.push_back(0);
    }
    vector<string> ss(s.size());

    reverse(s.begin(), s.end());

    int ans = 0;
    for(int i = 0; i < s.size(); i++){
        if(s.at(i)){
            ans += pow(2, i);
        }
    }
    cout << ans << endl;
    


    
    
}
