#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, M;

    cin >> N >> M;
    vector<vector<int>> vec(N, vector<int>(M, 0));
    vector<int> c_vec(M, 0);
    vector<int> ans_vec(N, 0);

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            int input;
            cin >> input;
            vec[i][j] = input;
        }
    }

    for (int i = 0; i < M; i++)
    {
        cin >> c_vec[i];
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            int a, b, c;
            a = c_vec[j];
            b = vec[i][j];
            c = a * b;
            ans_vec[i] += c;
        }
    }

    for (int i : ans_vec)
    {
        cout << i << endl;
    }
}