#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int n, s;
    cin >> n >> s;
    bitset<31> bs(s);

    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int q1, q2;
        cin >> q1 >> q2;

        if(q1 == 0){
            bs.set(q2);
        }else if(q1 == 1){
            bs.reset(q2);
        }else{
            if(bs[q2]){
                cout <<"on" << "\n";
            }else{
                cout <<"off" << "\n";
            }
        }

    }
    

}
