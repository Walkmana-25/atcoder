#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, input;
    cin >> N;
    vector<int>  rice_cakes;
    for (int i = 0; i < N; i++)
    {
        cin >> input;
        rice_cakes.push_back(input);
    }
    int count = 0;
    sort(rice_cakes.begin(),rice_cakes.end(), greater<int>());
    int last = 0,num = 0;

    for (int i : rice_cakes)
    {
        if(i < last || num == 0){
            count++;
            last = i;
            num = 1;
        }
    }
    cout << count << endl;
    
    
}