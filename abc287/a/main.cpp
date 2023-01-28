#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int n;
    cin >> n;
    int for_num = 0;
    for (int i = 0; i < n; i++)
    {
        string input;
        cin >> input;
        /* code */
        if(input == "For"){
            for_num++;
        }
    }
    if((n - 1) / 2 < for_num){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    
}
