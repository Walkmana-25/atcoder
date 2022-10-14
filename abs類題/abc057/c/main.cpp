#include <bits/stdc++.h>
using namespace std;
int main(){
    long n;
    cin >> n;
    long ans = LONG_MAX;
    long loop = sqrt(n) + 1;
    for(int i = 1; i < loop; i++){
        long j = n / i;
        double jj = double(n) / i;
        if(jj != j){continue;}
        string s,ss;
        s = to_string(i);
        ss = to_string(j);
        int sum = max(s.size(),ss.size());
        if(sum < ans){ans = sum;}

    }
    cout << ans << endl;
}
