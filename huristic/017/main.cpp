#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n, m, d, k;

void input(){
    cin >> n >> m >> d >> k;

}
vector<int> solve(){
    vector<int> v(m);
    int output = 1;
    for (int i = 0, current = 1; i < m; i++)
    { 
        /* code */
        if(current == k){
            current = 1;
            output++;
        }
        v.at(i) = output;
        current++;
    }
    return v;
    

}
void output(vector<int> &v){
    for(auto a : v){
        cout << a << "\n";
    }
}
int main(){
    input();
    auto v = solve();
    output(v);
}