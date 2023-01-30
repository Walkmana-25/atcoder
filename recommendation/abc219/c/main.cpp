#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int num(const char &a, const string &s){
    for (int i = 0; i < 26; i++)
    {
        /* code */
        if(s.at(i) == a){
            return i;
        }
        return -1;
    }
    
}

int main(){
    string dict;
    cin >> dict;
    int n;
    cin >> n;

    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        /* code */
        string s;
        cin >> s;
        v.push_back(s);
    }


    for (int i = 0; i < n; i++)
    {
        /* code */
        for (int j = n - 1; j > 0; j--)
        {
            /* code */
            int l = min(v.at(j).size(), v.at(j - 1).size());
            for (int k = 0; k < l; k++)
            {
                /* code */
                if(num(v.at(j).at(k), dict) < num(v.at(j - 1).at(k), dict)){
                    swap(v.at(j),v.at(j - 1));
                }

            }
            
        }
        
    }


    
    for(auto a: v){
        cout << a << "\n";
    }
    




    
}
