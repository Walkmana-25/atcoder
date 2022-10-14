#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> even,odd;
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        if(input % 2 == 0){
            even.push_back(input);
        }else {
            odd.push_back(input);
        }
    }
    if(even.size() == 1 && odd.size() == 1){cout << -1 << endl;exit(0);}
    
    sort(even.begin(),even.end(), greater<int>());
    sort(odd.begin(),odd.end(), greater<int>());

    if(even.size() == 1 || even.size() == 0){
        cout << odd[0] + odd[1] << endl;
    }else if(odd.size() == 1 || odd.size() == 0){
        cout << even[0] + even[1] << endl;
    }else{
        int max_even,max_odd;
        max_even = even[0] + even[1];
        max_odd = odd[0] + odd[1];
        if(max_even > max_odd){
            cout << max_even << endl;
        }else{
            cout << max_odd << endl;
        }
    }
}

