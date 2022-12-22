#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int n;
    cin >> n;

    vector<int> v;
    for (int i = 1; i <= n; i++)
    {
        /* code */
        v.push_back(i);
    }

    vector<vector<int>> vv;
    do
    {
        vv.push_back(v);
        /* code */

    } while (next_permutation(v.begin(), v.end()));

    sort(vv.begin(),vv.end());


    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> a.at(i);
        
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> b.at(i);
    }
    
    int aa = 0;
    int bb = 0;
    

    for (int i = 0; i < vv.size(); i++)
    {
        /* code */
        if(a == vv.at(i) && !aa){
            aa = 1 + i;
        }
        if(b == vv.at(i) && !bb){
            bb = 1 + i;
        }


    }
    cout << int(fabs(aa - bb)) << endl;
    
    
}
