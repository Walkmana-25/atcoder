#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool flag = false;
int main()
{
    int n;
    int sum = 0;
    cin >> n;
    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        ll input;
        cin >> input;
        if (input % 2)
        {
            v.push_back(input);
        }

    }
    for(auto i : v){
        sum += i;
    }
    
    if (sum % 2 == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
