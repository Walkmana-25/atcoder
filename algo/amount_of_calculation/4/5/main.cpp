#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int n;
    cin >> n;
    vector<int> l(pow(10, 5) + 1);
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        l.at(input) += 1;
    }

    for(int i = 1; i < l.size(); i++){
        l.at(i) = l.at(i - 1) + l.at(i);
    }


    int d;
    cin >> d;
    for (int i = 0; i < d; i++)
    {
        /* code */
        int a, b;
        cin >> a >> b;
        cout << l.at(b) - l.at(a - 1) << "\n";
    }
    
    
}
