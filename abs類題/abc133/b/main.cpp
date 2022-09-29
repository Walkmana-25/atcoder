#include <bits/stdc++.h>
using namespace std;
int main(){
    int d,n;
    cin >> n >> d;
    vector<vector<int>> p(n, vector<int>(d));
    int count  = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < d; j++)
        {
            int input;
            cin >> input;
            p[i][j] = input;
        }
        
    }
    vector<double> vd;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            //distance
            double distance = 0;
            for(int k = 0; k < d; k++){
                distance += abs((p[i][k] - p[j][k])) *  abs((p[i][k] - p[j][k]));
            }
            distance = sqrt(distance);
            vd.push_back(distance);


        }
        
    }
    for (auto i : vd)
    {
        if(i == (int)(i))count++;
    }
    cout << count << endl;
    

    

    
}
