#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<char> s;
    string ss;
    int lc = 0, n = 0;
    char c, tmp;
    while(true){
        s.clear();
        cin >> ss;
        if(ss == "-"){break;}
        for (int i = 0; i < ss.size(); i++)
        {
            s.push_back(ss[i]);
        }
        
        cin >> lc;
        for (int i = 0; i < lc; i++)
        {
            cin >> n;
            for (int i = 0; i < n; i++)
            {
                tmp = s[0];
                //cout << tmp << endl;
                s.erase(s.begin());
                s.push_back(tmp);
            }
            
        }
        for (auto i: s)
        {
            cout << i;
        }
        cout << endl;
        
        
    }

}
