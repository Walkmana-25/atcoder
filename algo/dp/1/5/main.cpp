#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int n,m;
    cin >> n >> m;
    vector<int> a(n), ans(n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >>  a.at(i);

    }

    for (int i = 1; i < n; i++)
    {
        int ans_num = INT_MAX;
        /* code */
        for (int j = 1; j <= m; j++)
        {
            /* code */
            int target = i - j;
            if(target < 0){
                continue;
            }else{
                ans_num = min(ans_num, ans.at(target) + j * a.at(i));
            }

        }
        ans.at(i) = ans_num;
        
    }
    cout << ans.at(n - 1) << endl;
    
    
}
