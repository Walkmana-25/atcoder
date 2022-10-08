#include <bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin >> x;
    vector<int> v;
    v.push_back(1);
    for (int b = 2; b <= x ; b++)
    {
        for (int p = 2; p <= x; p++)
        {
            if(pow(b,p) > x){
                break;
            }else{
                v.push_back(pow(b,p));
            }

        }
        
        
    }
    cout << *max_element(v.begin(), v.end()) << endl;
    
}
