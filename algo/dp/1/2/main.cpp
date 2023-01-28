#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int n;
    cin >> n;
    vector<int> v(n + 1);

    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> v.at(i);
    }


    vector<int> dp(n + 1);

    dp.at(0) = 0;dp.at(1) = v.at(1);

    for(int i = 2; i < n; i++){
        dp.at(i) = min(
            dp.at(i - 1) + v.at(i),
            dp.at(i - 2) + (v.at(i) * 2)
        );
    }

    cout << dp.at(n - 1) << endl;
    

}
