#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    map<int, int> extra;
    set<int> extra_s;

    for (int i = 0; i < INT_MAX; i++)
    {
        int e = (a * i) % b;
        if(e == c){
            cout << "YES" << endl;
            exit(0);
        }
        extra[e] += 1;
        extra_s.insert(e);
        for (auto a  : extra_s)
        {
            if(extra[a] == 2){
                cout << "NO" << endl;
                exit(0);
            }
        }
        
        
    }
    
}
