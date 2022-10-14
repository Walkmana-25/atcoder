#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    int ans = 0;
    int ans_num = 0;
    for (int i = 2; i <= *max_element(v.begin(), v.end()); i++)
    {
        int count = 0;
        for (int j: v)
        {
            if(j % i == 0){
                count++;
            }
        }
        if(ans < count){
            ans = count;
            ans_num = i;
        }
        
    }
    cout << ans_num << endl;
    
    

    
}
