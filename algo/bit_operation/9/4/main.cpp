#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int n;
    cin >> n;
    bitset<31> bs;

    for (int i = 0; i < n; i++)
    {
        /* code */
        bs.set(i);
    }
    

    cout << bs.to_ulong() << endl;

    
}
