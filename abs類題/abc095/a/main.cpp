#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int count = 700;
    char a;
    cin>>s;
    for (int i = 0; i < 3; i++)
    {
        a = s[i];
        if(a == 'o'){count += 100;}
    }
    cout << count << endl;
    
}
