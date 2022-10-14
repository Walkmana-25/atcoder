#include <bits/stdc++.h>
using namespace std;
int main(){
    int n = 0;
    cin>>n;
    vector<int> a, b;
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        a.push_back(input);
    }
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        b.push_back(input);
    }
    for (int p = 1; p <= 3; p++)
    {
        sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += pow(abs(a[i] - b[i]), p);
        }
        sum = pow(sum, 1.0 / double(p));
        printf("%.6lf\n" , sum);
    }
    double max = 0;
    for (int i = 0; i < n; i++)
    {
        double d = 0;
        d = abs(a[i] - b[i]);
        if(max < d){
            max = d;
        }
    }
    printf("%.6lf\n", max);
    
    
    
    
}
