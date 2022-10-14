#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<string> nn;
    for (int i = 0; i < n; i++)
    {
        string input;
        cin >> input;
        nn.push_back(input);
    }
    int m;
    cin >> m;
    vector<string> mm;
    for (int i = 0; i < m; i++)
    {
        string input;
        cin >> input;
        mm.push_back(input);
    }

    map<string, int> mmm;
    for(auto i : nn){
        mmm[i] == 0;
    }
    for(auto i : mm){
        mmm[i] == 0;
    }
    for(auto i : nn){
        mmm[i] += 1;
    }
    for(auto i : mm){
        mmm[i] -= 1;
    }
    int max = 0;
    for (auto i : mmm)
    {
        if(i.second > max){
            max = i.second;
        }
    }
    cout << max << endl;
    
    
    
}
