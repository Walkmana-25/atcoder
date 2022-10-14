#include <bits/stdc++.h>
using namespace std;
int main(){
    int N, T, A;
    vector<int> h;
    cin >> N >> T >> A;
    //input
    for (int i = 0; i < N; i++)
    {
        int  input;
        cin >> input;
        h.push_back(input);
    }
    vector<double> temp;
    //平均温度の計算
    for (int i = 0; i < N; i++)
    {
        temp.push_back(T - (double(h[i]) * 0.006));
    }
    //差を計算
    vector<double> ab;
    for (int i = 0; i < N; i++)
    {
        ab.push_back(abs(temp[i] - double(A)));
    }
    //絶対値が一番小さいやつを見つける
    auto iter = min_element(ab.begin(),ab.end());
    auto idex = distance(ab.begin(), iter);
    cout << idex + 1 << endl;
    
    
}
