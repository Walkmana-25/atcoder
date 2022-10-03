#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> v(3, vector<int>(3));
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> v[i][j];
        }
        
    }
    vector<int> a(3), b(3);
    bool ans = true;
    for (int i = 0; i <= v[0][0]; i++)
    {
        a[0] = i;
        for (int j = 0; j < 3; j++)
        {
            b[j] = v[0][j] - i;
        }
        for (int j = 1; j < 3; j++)
        {
            a[j] = v[j][0]  - b[0];
        }
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                if(v[j][k] != a[j] + b[k]){
                    ans = false;
                }
            }
            
        }
        
        
        
    }
    if(ans){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    
    
}
