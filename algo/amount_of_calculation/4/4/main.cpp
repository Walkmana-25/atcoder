#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int n,d;
    cin >> n >> d;
    vector<int> v(n + 1);
    vector<int> ans(n - d + 2);
    for (int i = 1; i <= n; i++)
    {
        cin >> v.at(i);
        for (int j = 1; j <= n - d + 2; j++){
            if(j <= i && j + d - 1 > i){
                ans.at(j) += v.at(i);
            }
        }
    }


    

    int ans_num = -1;
    int max = -1;
    for (int i = 1; i < n - d + 2; i++)
    {
        if(ans.at(i) > max){
            max = ans.at(i);
            ans_num = i;
        }
    }
    cout << ans_num << "~" << ans_num + d - 1 << endl;
    
    
    
}
