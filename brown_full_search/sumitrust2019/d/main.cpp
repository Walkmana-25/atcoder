#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int n;
    string s;
    cin >> n >> s;

    int ans = 0;
    for (int i = 0; i < 1000; i++)
    {
        string pass;
        /* code */
        if(to_string(i).size() == 1){
            pass = "0";
            pass.append("0").append(to_string(i));

        }
        else if(to_string(i).size() == 2){
            pass = "0";
            pass.append(to_string(i));

        }
        else{
            pass = to_string(i);
        }
        bool a = false, b = false, c = false;
        for (int j = 0; j < s.size(); j++)
        {
            /* code */
            if(s.at(j) == pass.at(0) && !a){
                a = true;
            }
            else if(s.at(j) == pass.at(1) && a && !b){
                b = true;
            }
            else if(s.at(j) == pass.at(2) && b){
                c = true;
            }

        }
        if(a && b && c){
            ans++;
        }
        
    }
    cout << ans << endl;
    

}

