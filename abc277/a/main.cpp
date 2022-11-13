#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        if(input == x){
            cout << i + 1 << endl;
        }
    }
    
}
