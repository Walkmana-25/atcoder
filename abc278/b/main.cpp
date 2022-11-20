#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int h, m;
    cin >> h >> m;
    while(true){
        string hour, min;
        if(h < 10)hour = "0" + to_string(h);
        else{hour = to_string(h);}
        if(m < 10) min = "0" + to_string(m);
        else{min = to_string(m);}

        string h2, m2;
        h2 = (hour.substr(0,1));
        m2 = (hour.substr(1,1));
        h2 += (min.substr(0,1));
        m2 += (min.substr(1,1));
        
        if(0 <= stoi(h2) && stoi(h2) <= 23 && 0<= stoi(m2) && stoi(m2) <= 59){
            cout << h << " " << m << endl;
            exit(0);
        }
        m++;
        if(m == 60){
            h++;
            m = 0;
            if(h == 24){
                h = 0;
            }
        }
    }
}
