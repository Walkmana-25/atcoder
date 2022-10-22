#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int h,w;
    cin >> h >> w;
    vector<vector<string>> v(h,vector<string>(w));
    vector<vector<string>> ans(h,vector<string>(w));
    for (int i = 0; i < h; i++){
        string input;
        cin >> input;
        for (int k = 0; k < w; k++)
        {
            v[i][k] = input[k];
        }
        
    }

    
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if(v[i][j] == "#"){
                ans[i][j] = "#";
                continue;
            }
            int  count = 0;
            for (int k = -1; k <= 1; k++)
            {
                if(i + k < 0 || i + k >= h){
                    continue;
                }
                for (int l = -1; l <= 1; l++)
                {
                    if(l + j < 0 || l + j >= w){
                        continue;
                    }
                    if(v[i + k][j + l] == "#"){
                        count++;
                    }
                }
                
            }
            ans[i][j] = to_string(count);
            
        }
        
    }
    for (int i = 0; i < h; i++)
    {
        for (int k = 0; k < w; k++)
        {
            cout << ans[i][k];
        }
        cout << endl;
        
    }
    



}
