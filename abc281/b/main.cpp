#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    string s;
    cin >> s;
    if(s.length() != 8){
        cout << "No" << endl;
        return 0;
    }
    string s1 = s.substr(0, 1);
    string s2 = s.substr(1, 6);
    string s3 = s.substr(7,1);

    bool ans = true;

    if(!(s1.at(0) >='A' && s1.at(0) <= 'Z')){
        ans = false;
    }

    if(!(s3.at(0) >='A' && s3.at(0) <= 'Z')){
        ans = false;
    }

    for (int i = 0; i < s2.length(); i++)
    {
        /* code */
        if(isdigit(s2[i]) == false){
            ans = false;
        }
    }
    if(ans){
        int a = stoi(s2);
        if(a >= 100000 && a <= 999999){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    
    

}
