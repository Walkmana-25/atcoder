#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int n,d;
    cin >> n >> d;
    vector<int> ans(n + 1);
    ans.at(0) = 0;
    for (int i = 1; i <= n; i++)
    {
        /* code */
        int input;
        cin >> input;
        ans.at(i) = ans.at(i - 1) + input;

    }
    pair<int, int> ans_pair;
    int max = -1;

    for (int i = 1; i <= n - d + 1; i++)
    {
        int current = ans.at(i + d - 1) - ans.at(i - 1);
        if(max <= current){
            ans_pair.first = i;
            ans_pair.second = i + d - 1;
            max = current;
        }
    }
    
    cout << ans_pair.first - 1 << "~" << ans_pair.second  - 1<< endl;

}
