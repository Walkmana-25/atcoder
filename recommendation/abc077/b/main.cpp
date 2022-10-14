#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i = n; i > 0; --i)
    {
        //cout << i << endl;
        double a = sqrt(i);
        int b = (int)(a);
        if(a == b){
            cout << i << endl;
            break;
        }

    }
    
}
