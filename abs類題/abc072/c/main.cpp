#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    map<int,int> m;
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        m[input]++;
        if(max < input){
            max = input;
        }
    }
    int ans = 0;
    for (int i = 1; i <= max + 1; i++)
    {
        int test = 0;
        test = m[i - 1] + m[i] + m[i + 1];
        if(ans < test){
            ans = test;
        }
    }
    cout << ans << endl;
    
    
    

    
}
