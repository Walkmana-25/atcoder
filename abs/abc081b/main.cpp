#include <bits/stdc++.h>
using namespace std;
int hanbetu(vector<int> test)
{
    int n = 1;
    for (auto i : test)
    {
        if (i % 2 != 0)
        {
            n = 0;
        }
    }
    return n;
}

int main()
{
    int t;
    cin >> t;
    vector<int> test;
    int input;
    for (int i = 0; i < t; i++)
    {
        cin >> input;
        test.push_back(input);
    }
    int count = 0;
    while (hanbetu(test))
    {
        for (auto i = 0; i < t; i++)
        {
            test[i] = test[i] / 2;
        }
        count++;
    }
    cout << count << endl;
}