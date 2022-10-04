#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int w;
    vector<char> ans;
    cin >> s >> w;
    for (int i = 0; i < s.size(); i++)
    {
        if((i) % w == 0){
            ans.push_back(s[i]);
        }//else if(i == 0){
          //  ans.push_back(s[i]);
        //}
    }
    for (auto i : ans)
    {
        cout << i;
    }
    cout << endl;
    
    
}
