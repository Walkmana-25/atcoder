#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int n,k;
    cin >> n >> k;
    set<int> s;

    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        s.insert(input);

    }
    int mex;
    for (int i = 0;; i++)
    {
        /* code */
        if(s.find(i) == s.end()){
            mex = i;
            break;
        }
    }
    


    cout << min(mex, k) << endl;
    

    
}
