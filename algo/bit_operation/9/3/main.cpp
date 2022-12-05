#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int n,k;
    cin >> n >> k;
    bitset<31> bs;
    for (int i = 0; i < k; i++)
    {
        /* code */
        int input;
        cin >> input;

        bs.set(input);

    }
    cout << bs.to_ulong() << endl;
    
}
