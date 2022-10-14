#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    char c;
    map<char, int> m;
    for (int i = 97; i < 123; i++)
    {
        m[(char)(i)] = 0;
    }
    while(getline(cin ,s)){
        for (int i = 0; i < s.size(); i++)
        {
            c = s[i];
            if(isupper(c)){c = tolower(c);}
            //cout << c << endl;
            m[c] += 1;
        }
        
    }
    for (int i = 97; i < 123; i++)
    {
        cout << (char)(i) << " " << ":" << " " <<m[(char)(i)] <<  endl;;
    }
    
    
}
