#include <bits/stdc++.h>
using namespace std;
int main(){
    int n = 0; double sum = 0;
    double ave = 0, a = 0;
    vector<double> s;
    while(true){
        cin>>n;
        sum = 0;
        ave = 0;
        a = 0;
        s.clear();
        if(n == 0){break;}
        for (int i = 0; i < n; i++)
        {
            int input =0;
            scanf("%d",&input);
            s.push_back(input);
            sum += input;
        }
        
        ave = sum / n;
    
        for (int i = 0; i < n; i++)
        {
            a += pow((s[i] - ave),2);
        }
        a = sqrt(a/n);
        printf("%.8lf\n", a);
    }


    
    
}
