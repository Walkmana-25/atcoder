#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int n;
    cin >> n;
    bitset<30> bs(n);

    cout << bs.count() << endl;

    for (int i = 0; i < 30; i++)
    {
        /* code */
        if(bs.test(i)){cout << i << endl;}
    }
    

}
