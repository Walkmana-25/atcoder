#include <bits/stdc++.h>
using namespace std;
int main(){
    int sum;
    string s;
    while(getline(cin, s)){
        int count = 0;
        char c;
        for (int i = 0; i < s.size(); i++)
        {
            c = s[i];
            count += (c - '0');
        }
        if(count != 0)cout << count << endl;        
    }
}
