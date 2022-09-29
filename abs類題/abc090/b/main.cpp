#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    vector<int> c;
    int count = 0;
    for(int i = a; i <= b; i++){
        c.clear();
        int ii = i;
        while(ii > 0){
            c.push_back(ii % 10);
            ii /= 10;
        }
        int size = c.size();
        bool s = true;
        for (int j = 0; j < (c.size() /2); j++)
        {
            if(c[j] != c[c.size() - j - 1]){s = false;}
        }
        if(s){count++;}
        
    }
    cout << count << endl;
}
