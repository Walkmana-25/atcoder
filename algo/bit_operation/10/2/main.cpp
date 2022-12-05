#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int n, v;
    cin >> n >> v;
    vector<int> vv(n);


    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> vv.at(i);
    }

    bool ans = false;


    for(int i = 0; i < (1 << n); i++){
        long long tmp_num = 0;

        for (int j = 0; j < n; j++)
        {

            /* code */
            if(i & (1 << j)){
                tmp_num += vv.at(j);
            }
            
        }
        if(tmp_num == v){
            ans = true;
        }
        
    }
    if(ans){
        cout << "Yes" << endl;
    }else {
        cout << "No" <<  endl;
    }


    
}
