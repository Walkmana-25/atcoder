#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int n;
    cin >> n;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        if(i % 2 == 0){
            count++;
        }
    }
    cout << count << endl;
    
}
