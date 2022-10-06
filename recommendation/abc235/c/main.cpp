#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin >> n >> q;
    vector<long> v(n);
    vector<vector<long>> v2(q,vector<long>(2));
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < q; i++)
    {
        cin >> v2[i][0] >> v2[i][1];
    }
    for(auto i : v2){
        long x = i[0];
        long k = i[1];
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if(v[j] == x){count++;}
            if(count == k){cout << j + 1 << endl;break;}
        }
        if(count != k){cout << "-1" << endl;}
        
    }
    
    


    
}
