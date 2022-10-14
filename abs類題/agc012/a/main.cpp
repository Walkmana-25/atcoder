#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<long> a;
    for (int i = 0; i < 3 * n; i++)
    {
        long input;
        cin >> input;
        a.push_back(input);
    }
    sort(a.begin(), a.end(), greater<long>());
    long ans = 0;
    for (int i = 0; i < 2 * n; i++)
    {
        if(i % 2){
            ans += a[i];
        }
    }
    cout << ans << endl;
    


    
}
