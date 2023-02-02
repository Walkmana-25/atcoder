#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int n;
    cin >> n;
    vector<vector<int> > v(n, vector<int>(n, 0));

    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> v.at(0).at(i);
    }


    for (int i = 1; i < n; i++)
    {
        /* code */
        for (int j = 0; j < n; j++)
        {
            /* code */
            auto it = v.begin() + (i - 1);
            int num = 0;
            if(j != 0){
                num += it->at(j - 1) ;
            }
            num += it->at(j);
            if(j != n - 1){
                num += it->at(j + 1);

            }

            v.at(i).at(j) = num % 100;
        }
        
    }
    cout << v.at(n - 1).at(n - 1) << endl;
    
    
}
