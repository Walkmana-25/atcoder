#include <bits/stdc++.h>
using namespace std;

using ll=long long;
int num(const char &c, const string &X){
    for (int i = 0; i < X.size(); i++)
    {
        /* code */
        if(X.at(i) == c){
            return i;
        }
    }
    return -1;
    
}

int main(){
    string X;
    cin >> X;
    int n;
    cin >> n;

    vector<string> s;
    vector<vector<int>> v;
    map< vector<int>, string> m;

    for (int i = 0; i < n; i++)
    {
        /* code */
        string ss;
        cin >> ss;
        s.push_back(ss);
        
    }


    for(int i = 0; i < n; i++){
        string ss = s.at(i);
        vector<int> num_v;
        for (int j = 0; j < ss.size(); j++)
        {
            /* code */
            int tmp = num(ss.at(j), X);
            num_v.push_back(tmp);

        }
        m[num_v] = ss;
        v.push_back(num_v);
        
    }
    sort(v.begin(), v.end());

    for(auto a : v){
        cout << m[a] << "\n";
    }
    
    

}
