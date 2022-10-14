#include <bits/stdc++.h>
using namespace std;
int main(){
    int n = 0, h = 0,t = 0;
    string hs,ts;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> ts >> hs;
        if(ts == hs){
            h++;
            t++;
        } else if(ts < hs){
            h += 3;
        }else {
            t += 3;
        }
    }
    cout << t << " " << h << endl;
    
}
