#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(2));

    vector<int> oder;
    for (int i = 0; i < n; i++)
    {
        /* code */
        oder.push_back(i);
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> v.at(i).at(0) >> v.at(i).at(1);
    }

    double sum = 0;;
    int count = 0;

    sort(oder.begin(), oder.end());
    do
    {
        count++;
        double d = 0;
        for (int i = 1; i < n; i++)
        {
            /* code */
            d += sqrt(
                pow(
                    v.at(oder.at(i)).at(0) - v.at(oder.at(i - 1)).at(0), 2) +
                pow(

                    v.at(oder.at(i)).at(1) - v.at(oder.at(i - 1)).at(1), 2));
        }
        sum += d;

    } while ( next_permutation(oder.begin(), oder.end()) );


    printf("%.10f\n", sum / count);

    
}
