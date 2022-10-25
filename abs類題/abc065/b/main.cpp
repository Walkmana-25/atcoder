#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int n;
    cin >> n;
    vector<int> button(n);
    vector<bool> state(n);
    state[0] = true;
    for (int i = 0; i < n; i++)
    {
        cin >> button[i];
    }
    int count = 0;
    int on = 0;
    for (int i = 0; i < n; i++)
    {
        loop:
        if(count){
            if(on == 0){
                cout << -1 << endl; 
                exit(0);
            }
        }
        if(on == 1){
            cout << count << endl;
            exit(0);
        }
        count++;
        on = button[on] - 1;
        }
        

    cout << -1 << endl;
    
}
