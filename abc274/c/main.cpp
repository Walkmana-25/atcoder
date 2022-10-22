#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int n;
    cin >> n;
    map<int,int> m;
    set<int> s;
    set<int> l;
    s.insert(1);
    l.insert(1);
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        s.erase(input);
        s.insert(2 * (i + 1));
        s.insert(2 * (i + 1) + 1);
        l.insert(2 * (i + 1));
        l.insert(2 * (i + 1) + 1);

        m[2 * (i + 1)] = input;
        m[2 * (i + 1) + 1] = input;
    }
    for (auto  i : l)
    {
        int count = 0;
        while(true){
            if(i == 1){
                break;
            }
            i =  m[i];
            count++;
        }
        cout << count <<  endl;
    }
    
    
}
