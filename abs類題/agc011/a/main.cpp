#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    long long c,k;
    cin >> n;
    cin >> c >> k;
    vector<long long> t(n);
    for (int i = 0; i < n; i++)
    {
        cin >> t[i];
    }
    long long ans = 0;
    sort(t.begin(), t.end());
    for (int i = 0; i < n;)
    {
        long long left = t[i] + k;
        long long left_left = 0;
        i++;
        ans++;
        long long bus = 1;
        do{
            left_left = t[i];
            if(left >= left_left && bus < c && i < n){
                i++;
                bus++;
            }
        }while(left > left_left && bus < c && i < n);
    }
    cout << ans << endl;
    
    
    
}
