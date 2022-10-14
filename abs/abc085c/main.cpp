#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    long y;
    cin >> n >> y;
    for(long i = 0; i <= n; i++){
        for (long j = 0; j <= n - i; j++)
        {
            long k = n - i - j;
            if(k < 0){continue;}
            if(((long)(i * 10000) + (long)(j * 5000) + (long)(k * 1000))  == y){
                cout << i << " " << j << " " << k << endl;
                exit(0);
            }
        }
    }
    cout << "-1 -1 -1"<< endl;
        
}
