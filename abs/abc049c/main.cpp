#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, ss = "-1";
    cin >> s;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if(ss == "-1"){
            ss = "";
        }
        ss += s[i];
        if(
            ss == "maerd" || ss == "remaerd" || ss == "esare" || ss == "resare"
        ){
            ss = "-1";
        }
    }
    if(ss == "-1"){
        cout << "YES" << endl;
    }else {
        cout << "NO" << endl;
    }
}
