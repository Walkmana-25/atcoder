#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    string ans;
    bool flag = false;

    for (int i = 0; i < n; i++)
    {
        /* code */
        if(s.at(i) == '"'){
            if(flag){
                flag = false;
            }else{
                flag = true;
            }
        }

        if(s.at(i) == ','){
            if(flag){
                ans += ',';
            }else{
                ans += '.';
            }
        }else{
            ans += s.at(i);
        }
    }
    cout << ans << endl;
    
}
