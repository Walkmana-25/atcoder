#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int n,s,q;
    cin >> n >> s >> q;
    bitset<31> bs(s);

    for (int i = 0; i < q; i++)
    {
        /* code */
        int a, b;
        cin >> a >> b;
        if(a == 0){
            bs.flip(b);
        }else{
            if(bs[b]){
                cout << "on" << endl;
            }else {
                cout << "off" << endl;
            }
        }
    }
    
    
}
