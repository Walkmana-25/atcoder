#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,l;
    cin >> n >> l;
    vector<string> s;
    for (int i = 0; i < n; i++)
    {
        string input;
        cin >> input;
        s.push_back(input);
    }
    sort(s.begin(), s.end());
    for(auto i: s){
        cout << i;
    }
    cout << endl;
}
