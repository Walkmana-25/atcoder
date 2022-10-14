#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, input;
    vector<int> all, alice, bob;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> input;
        all.push_back(input);
    }
    // sortする

    sort(all.begin(), all.end(), greater<int>());
    int junban = 0;

    for (int i = 0; i < all.size(); i++)
    {
        if (junban == 0)
        {
            alice.push_back(all[i]);
            junban = 1;
        }
        else
        {
            bob.push_back(all[i]);
            junban = 0;
        }
    }
    int alice_all = 0, bob_all = 0;
    for (int i = 0; i < alice.size(); i++)
    {
        alice_all += alice[i];
    }
    for (int i = 0; i < bob.size(); i++)
    {
        bob_all += bob[i];
    }
    cout << alice_all - bob_all << endl;
}