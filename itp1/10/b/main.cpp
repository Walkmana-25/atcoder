#include <bits/stdc++.h>
using namespace std;
int main(){
    int deg, a , b,c;
    double s, l, h;
    double rad, PI = acos(-1);
    cin >> a >> b;
    scanf("%d", &deg);
    rad = deg * PI / 180;

    s = 0.5 * a * b * sin(rad);

    l = sqrt((pow(a,2) + pow(b,2)) - (2 * a * b * cos(rad))) + a + b;

    h = (2 * s) / a;
    printf("%.8f\n%.8f\n%.8f\n", s, l, h);

}
