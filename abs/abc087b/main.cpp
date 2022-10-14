#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, x, sum, count;
    count = 0;
    sum = 0;
    cin >> a >> b >> c >> x;

    for (int i = 0; i <= a; ++i)//500円玉ループ
    {
        for (int j = 0; j <= b; ++j)//100
        {
            for (int k = 0; k <= c; ++k)
            {
                sum += i * 500;
                sum += j * 100;
                sum += k * 50;
                if(sum == x){
                    count++;
                }
                sum = 0;
            }
            
        }
        
    }
    cout << count << endl;
    
}
