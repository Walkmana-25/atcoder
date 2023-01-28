#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int n, m;
    cin >> n >> m;
    vector<string> ss;

    for (int i = 0; i < n; i++)
    {
        /* code */
        string input;
        cin >> input;
        input  = input.substr(3,3);
        ss.push_back(input);

    }
    int ans = 0;
    vector<string> sss;
    for (int i = 0; i < m; i++)
    {
        /* code */
        string input;
        cin >> input;
        sss.push_back(input);

    }
    for (int i = 0; i < n; i++)
    {
        auto a = ss.at(i);
        bool flag = false;
        /* code */
        for (int j = 0; j < m; j++)
        {
            /* code */
            if(a == sss.at(j)){
                flag = true;
            }

        }
        if(flag){
            ans++;
        }
        
    }
    
    
    
    cout << ans << endl;
}
