#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    vector<bitset<16>> v;

    for (int i = 0; i < 8; i++)
    {
        /* code */
        int input;
        cin >> input;
        bitset<16> vv(input);
        v.push_back(vv);
    }


    for (int i = 0; i < 8; i++)
    {
        /* code */
        for (int j = 7; j > -1; j--)
        {
            bool tmp = v[i].test(2 * j);
            bool tmp2 = v[i].test(2 * j + 1);
            if((tmp == false) && (tmp2 == false)){
                cout << ".";
            }else if ((tmp == false) && (tmp2 == true)){
                cout << "x";
            }else{
                cout << "o" ;
            }
        }
        cout << endl;
        
    }
    

    
}
