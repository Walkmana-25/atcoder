#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int n, m;
    cin >> n >> m;
    vector<set<int>> v(n + 1);
    for (int i = 0; i < m; i++)
    {
        /* code */
        int a, b;

        cin >> a >> b;
        v.at(a).insert(b);
        v.at(b).insert(a);
    }
    bool ans = true;
    int one = 0;
    int current = 0;
    for (int i = 1; i <= n; i++)
    {
        /* code */
        if(v.at(i).size() == 1){
            one++;
            current = i;
        }else if(v.at(i).size() != 2){
            ans = false;
        }
    }
    if(one != 2){
        ans = false;
    }

    vector<int> vvv;
    vvv.push_back(current);
    int aaa = 0;

    if(ans){
    for (int i = 0; i < n; i++)
    {
        if(v.at(current).size() == 1 && aaa != 0){
            break;
        }
        aaa = 1;
        for (auto a : v.at(current))
        {
            /* code */
            if(find(vvv.begin(), vvv.end(), a) == vvv.end()){
                current = a;
                vvv.push_back(current);
            }
        }
        
    }
    if(vvv.size() != n){
        ans = false;
    }
    }



    if(ans){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    
    
}
