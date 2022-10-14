#include <bits/stdc++.h>
using namespace std;
int main(){
    double a,b,c;
    double x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    a = pow(x2 - x1,2);
    b = pow(y2 - y1,2);
    c = a + b;
    cout << fixed << setprecision(1000);
    cout << sqrt(c) << endl;
}
