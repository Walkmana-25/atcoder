#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<vector<int>> v(n,vector<int>(3));
    for (int i = 0; i < n; i++)
    {
        cin >> v[i][0] >> v[i][1] >> v[i][2];
    }
    int now_x = 0, now_y = 0, p_time = 0;
    for(auto i : v){
        int distance = abs(now_x - i[1]) + abs(now_y - i[2]);
        int time = i[0] - p_time;
        int tmp = time - distance;
        if((tmp == 0 || tmp % 2 == 0) && tmp >= 0){
            now_x = i[1];
            now_y = i[2];
            p_time = i[0];
        } else{
            cout << "No" << endl;
            exit(0);
        }

    }
    cout << "Yes" << endl;
    
}
