#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int n;
    cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; i++)
    {
        string input;
        cin >> input;
        for (auto a : s)
        {
            if(a == input){
                cout << "No" << endl;
                exit(0);
            }
        }
        s.at(i) = input;
        
    }

    vector<char> one = {'H', 'D', 'C', 'S'};
    vector<char> two = {'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T','J', 'Q','K'};
    bool flag = true;
    
    for (auto a : s)
    {
        /* code */
        bool flag_a = false;
        bool flag_b = false;
        for (auto b : one)
        {
            if(a[0] ==b){
                flag_a = true;
            }
        }
        for (auto c : two)
        {
            /* code */
            if(a[1] == c){
                flag_b = true;
            }
        }
        if(!flag_b || ! flag_a){
            flag = false;
        }
        
        

    }
    if(flag){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }









    
}
