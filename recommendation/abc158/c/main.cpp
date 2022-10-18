#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int a,b;
    cin >> a >> b;
    int ans;
    for (int i = 1; i <= 1000; i++)
    {
        int i_a = i * 0.08;
        int i_b = i * 0.1;
        if(i_a == a && i_b == b){
            cout << i << endl;
            exit(0);
        }
    }
    cout << -1 << endl;
    

}
