#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;
    vector<vector<int>> cell(r + 1, vector<int>(c + 1));
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            int input;
            cin >> input;
            cell[i][j] = input;
        }
        
    }

    //最初に横を加算する
    for (int i = 0; i < r; i++)
    {
        int sum = 0;
        for (int j = 0; j < c; j++)
        {
            sum += cell[i][j];
        }
        cell[i][c] = sum;
        
    }
    
    //次に縦を加算する
    for (int i = 0; i <= c; i++)
    {
        int sum = 0;
        for(int j = 0; j <= r; j++){
            sum += cell[j][i];
        }
        cell[r][i] = sum;
    }

    //出力する
    for (int i = 0; i <= r; i++)
    {
        for (int j = 0; j <= c; j++)
        {
            cout << cell[i][j];
            if(c != j){
                cout << " ";
            }
            
        }
        cout << endl;
        
    }
    
    
}