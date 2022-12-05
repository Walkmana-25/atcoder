#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int n, x , q;
    cin >> n >> x >> q;

    bitset<31> bs(x);

    for (int i = 0; i < q; i++)
    {
        /* code */
        int query, query2;
        cin >> query >> query2;
        if(query == 0){
            bs.set(query2);
        }else if(query == 1){
            bs.reset(query2);
        }else{
            if(bs.test(query2)){cout << "Yes" << endl;}
            else{cout << "No" << endl;}
        }
    }
    
}
