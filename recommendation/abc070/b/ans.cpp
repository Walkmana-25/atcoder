#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d,sum = 0;
    cin >> a >> b >> c >> d;
    sum = min(b,d) - max(a,c);
    if(sum < 0){sum = 0;}
    cout << sum << endl;
}
