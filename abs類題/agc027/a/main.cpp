#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin >> n >> x;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        a.push_back(input);
    }
    sort(a.begin(), a.end());
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if(x < a[i])break;
        x -= a[i];
        ans++;
    }
    if(x && ans == n){
        ans--;
    }
    cout << ans << endl;
    
}
