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
    int max = (m / (d - 1)) + 1;
    while(true){
    for (int i = 0, current = 1; i < m; i++)
    { 
        /* code */
        if(current == max){
            current = 1;
            output++;
        }
        v.at(i) = output;
        current++;
    }
    output = 1;
    if(*(v.end() - 1) > d){
        max = k;
    }else{
        bool flag = true;
        vector<int> vv(d + 1);
        for(auto a : v){
            vv.at(a)++;
        }
        for(auto a : vv){
            if(a > k){
                flag = false;
                max = k;
            }
        }
        if(flag){break;}
    }
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