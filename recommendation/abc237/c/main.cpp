#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    string s;
    cin >> s;
    bool ans = false;

    int num_a_first = 0, num_a_end = 0;

    for (int i = 0; i < s.size(); i++)
    {
        /* code */
        if(s.at(i) == 'a'){
            num_a_first++;
        }else{
            break;
        }
    }
    
    for (int i = s.size() - 1; i > -1; i--)
    {
        /* code */
        if(s.at(i) == 'a'){
            num_a_end++;
        }else{
            break;
        }
    }

    //aを付け足す
    string sum_a = "";
    for (int i = 0; i < num_a_end - num_a_first; i++)
    {
        /* code */
        sum_a += 'a';
    }

    s = sum_a + s;

    string ss = s;
    reverse(ss.begin(), ss.end());

    if(s == ss){
        cout << "Yes" << endl;

    }else{
        cout << "No" << endl;
    }

    


}
