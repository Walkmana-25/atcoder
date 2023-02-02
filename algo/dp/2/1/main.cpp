#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    vector<vector<int>> v(4, vector<int>(4));

    cin >> v.at(0).at(0) >> v.at(0).at(1) >> v.at(0).at(2) >> v.at(0).at(3);

    for (int i = 1; i < 4; i++)
    {
        /* code */
        for (int j = 0; j < 4; j++)
        {
            /* code */
            if(j != 0){
                v.at(i).at(j) += v.at(i - 1).at(j - 1);
            }
            v.at(i).at(j) += v.at(i - 1).at(j);
            if(j != 3){
                v.at(i).at(j) += v.at(i -1).at(j + 1);
            }
        }
        
    }
    cout << v.at(3).at(3) << endl;
    

}
