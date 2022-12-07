#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> v.at(i);
    }
    int count_min = INT_MAX;
    
    for (int i = 0; i < (1 << n); i++)
    {
        bitset<26> bs;
        int count = 0;
        /* code */
        for (int j = 0; j < n; j++)
        {
            /* code */
            if(i & (1 << j)){
                string s = v.at(j);
                count++;
                for (int k = 0; k < s.size(); k++)
                {
                    /* code */
                    bs.set(char(s.at(k)) - 'a');
                }
                
            
            }
        }
        if(bs.count() == 26){
            count_min = min(count_min, count);
        }
        
        
    }
    if(count_min == INT_MAX){
        count_min = -1;
    }
    cout << count_min << endl;
    



    
}
