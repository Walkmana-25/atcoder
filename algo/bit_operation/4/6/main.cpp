#include <iostream>
#include <math.h>
using namespace std;
using ll = long long;
int main(){
    int a, i;
    cin >> a >> i;
    i = pow(2, i);
    cout << (a & i) << endl;
}
