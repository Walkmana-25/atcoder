#include <bits/stdc++.h>
using namespace std;
int main(){
    bitset<26> ss;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        char a = s[i];
        ss.set(a - 'a');
    }
    for (int i = 0; i < 26; i++)
    {
        if(!(ss[i])){
            char ans = i + 'a';
            cout << ans << endl;
            exit(0);
        }
    }
    cout << "None" << endl;
    

    
}
