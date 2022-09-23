#include <bits/stdc++.h>
using namespace std;

int main(){
    string a;
    int count = 0;
    cin>>a;
    for (int i = 0; i < 3; i++)
    {
        char c = a[i];
        if(c == '1'){
            count++;
        }
    }
    
    
    cout << count << endl;
    
}