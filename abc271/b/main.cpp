#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin  >> n >> q;
    vector<vector<int>> v(n);

    for (int i = 0; i < n; i++)
    {
        int l;
        cin >> l;
        for (int j = 0; j < l; j++)
        {
            int input;
            cin >> input;
            v[i].push_back(input);
        }
        
    }
    vector<pair<int,int>> qq;
    for (int i = 0; i < q; i++)
    {
        pair<int,int> input;
        cin >> input.first >> input.second;
        qq.push_back(input);
        
    }
    for(auto i : qq){
        cout << v[i.first - 1][i.second - 1] << endl;
    }
    
    
}
