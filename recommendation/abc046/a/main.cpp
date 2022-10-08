#include <bits/stdc++.h>
using namespace std;
int main(){
    set<int> s;
    for (int i = 0; i < 3; i++)
    {
        int input;
        cin >> input;
        s.insert(input);
    }
    
    cout << s.size() << endl;
    
}
