#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 1; i <= n; i += 2)
    {
        /* code */
        if(i % 2 == 0){
            continue;
        }
        int count = 0;
        for (int j = 1; j <= i; j++)
        {
            /* code */
            if(i % j == 0){count++;}
        }
        if(count == 8){
            ans++;
        }
        
    }
    cout << ans << endl;
    
}
