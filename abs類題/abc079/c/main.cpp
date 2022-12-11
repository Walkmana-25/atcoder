#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    vector<int> v(4);
    string input;
    cin >> input;
    for (int i = 0; i < 4; i++)
    {
        /* code */
        v.at(i) = stoi(to_string(input.at(i) - '0'));

    }
    

    
    for (int i = 0; i < (1 << 3); i++)
    {
        int sum = v.at(0);
        vector<string> s(3);
        /* code */
        for (int j = 0; j < 3; j++)
        {
            /* code */
            if(i & (1 << j)){
                s.at(j) = "+";
                sum += v.at(j + 1);
            }else{
                s.at(j) = "-";
                sum -= v.at(j + 1);
            }
        }
        
        if(sum == 7){
            for (int i = 0; i < 3; i++)
            {
                /* code */
                cout << v.at(i);
                cout << s.at(i);
            }
            cout << v.at(3) << "=7" << endl;
            return 0;
            
        }

    }
    
}
