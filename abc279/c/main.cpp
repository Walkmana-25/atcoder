#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int h,w;
    cin >> h >> w;
    vector<int> v(h);
    for (int i = 0; i < h; i++)
    {
        int count = 0;
        string input;
        cin >> input;
        for (int j = 0; j < w; j++)
        {
            /* code */
            if(input[j] == '#'){
                count++;
            }
            
        }
        v.at(i) = count;
        
    }
        vector<int> vv(h);
    for (int i = 0; i < h; i++)
    {
        int count = 0;
        string input;
        cin >> input;
        for (int j = 0; j < w; j++)
        {
            /* code */
            if(input[j] == '#'){
                count++;
            }
            
        }
        vv.at(i) = count;
        
    }
    if(vv == v){
        cout << "Yes" << endl;
    }else {
        cout << "No" << endl;
    }
    
}
