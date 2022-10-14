#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,l;
    cin >> n >> m >> l;
    vector<vector<long>> a(n,(vector<long>(m, 0)));
    vector<vector<long>> b(m,(vector<long>(l, 0)));
    vector<vector<long>> ans(n,(vector<long>(l, 0)));

    //aのinput
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            long input;
            cin >> input;
            a[i][j] = input;
        }
        
    }

    //bのinput
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < l; j++)
        {
            long input;
            cin >> input;
            b[i][j] = input;
        }
        
    }

    //計算する
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < l; j++)
        {
            for (int k = 0; k < m; k++)
            {
                ans[i][j] += a[i][k] * b[k][j];
            }
            
        }
        
    }


    //表示する
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < l; j++)
        {
            cout << ans[i][j];
            if((j) != (l - 1)){
                cout << " ";
            }
        }
        cout << endl;
        
    }
    
    
    
}