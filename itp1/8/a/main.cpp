#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int a;
    char c;
    getline(cin,s);
    a = s.size();
    for (int i = 0; i < a; i++)
    {
        c = s[i];
        if(islower(c)){
            c = toupper(c);
        }else if(isupper(c)){
            c = tolower(c);
        }
        cout << c;
    }
    cout << endl;
    
}