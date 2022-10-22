#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int h,w;
    cin >> h >> w;
    vector<vector<string>> v(h, vector<string>(w));
    vector<int> ans(w);
    for (int i = 0; i < h; i++)
    
    {
        string input;
        cin >> input;
        for (int j = 0; j <w; j++)
        {
            v[i][j] = input[j];
        }
        
    }

    for (int i = 0; i < w; i++)
    {
        int count = 0;
        for (int j = 0; j < h; j++)
        {
            if(v[j][i] == "#"){
                count++;
            }
        }
        ans[i] = count;
        

    }
    for (int i = 0; i < w; i++)
    {
        cout << ans[i];
        if(i != (w - 1)){
            cout << " ";
        }
    }
    cout << endl;
    
    
    
}
