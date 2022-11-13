#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    unsigned int n, s, q;
    cin >> n >> s >> q;
    bitset<31> bs(s);
    for (int i = 0; i < q; i++)
    {
        /* code */
        int a,b;
        cin >> a >> b;
        if(a){
            if(bs[b]){
                cout << "on" << endl;
            }else{
                cout << "off" << endl;
            }
        }else{
            bitset<31> bs2(1);
            bs2 <<= b;
            bs |= bs2;
        }

    }
    


}
