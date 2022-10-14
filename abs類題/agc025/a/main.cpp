#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int min = INT_MAX;
    for (int i = 1; i < n; i++)
    {
        int jj = n - i;
        int ii = i;
        int sum = 0;
        while (ii > 0)
        {
            sum += ii % 10;
            ii /= 10;
        }
        while (jj > 0){
            sum += jj % 10;
            jj /= 10;
        }
        if (sum < min){
            min = sum;
        }
        

    }
    cout << min << endl;

    
}
