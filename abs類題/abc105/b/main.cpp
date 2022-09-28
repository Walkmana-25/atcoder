#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i = 0; i < 16; i++)
    {
        for(int j = 0; j < 16; j++){
            if(n == (i * 7 + j * 4)){cout << "Yes" << endl;;exit(0);}
        }
    }
    cout << "No" << endl;
    
}
