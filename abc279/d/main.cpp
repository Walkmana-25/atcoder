#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    ll a, b;
    cin >> a >> b;
    vector<double> v;
    double min_num = DBL_MAX;
    for (int i = 0;; i++)
    {
        double tmp = b * i + a / sqrt(i + 1);
        min_num = min(min_num, tmp);
        v.push_back(tmp);
        fprintf(stderr, "%.15f\n", tmp);

        if(i > 1){
            if(v[i - 2] < v[i]){
                break;
            }
        }
    }

    printf("%.15f\n", min_num);
    

        
}
