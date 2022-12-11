#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    string s;
    cin >> s;

    int maximum = 0;
    int count = 0;

    for (int i = 0; i < s.size(); i++)
    {
        /* code */
        bool flag = false;
        string ss = "ACGT";
        for (int j = 0; j < 4; j++)
        {
            /* code */
            if(s.at(i) == ss.at(j)){
                flag = true;
            }
        }
        if(!flag){
            count = 0;
        }else{
            count++;
            maximum = max(count, maximum);
        }
        

    }
    cout << maximum << endl;
    
}
