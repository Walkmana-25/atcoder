#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    pair<int,int> m = make_pair(0,0);
    cin >> n;
    if(n==1){cout << 1 << endl;return 0;}
    for (int j = 1; j <= n ; j++)
    {
        int count = 0;
        int i = j;
        while(i % 2 == 0 && i > 0){
            count++;
            i /= 2;
        }
        if(count > m.first){
            m.first = count;
            m.second = j;
        }
    }
    cout << m.second << endl;
    return 0;
    
    
}
