#include <bits/stdc++.h>
using namespace std;
int main(){
    string s,input;
    vector<string> ss;
    char c;
    cin >> s;
    while(true)
    {
        cin >> input;
        if(input == "END_OF_TEXT"){break;}
        for(int i = 0; i < input.size(); i++){
            if(isupper(input[i])){input[i] = tolower(input[i]);}
        }
        ss.push_back(input);
    } 
    int count = 0;
    for(auto i : ss){
        if (i == s){
            count++;
        }
    }
    cout << count << endl;
    
}
