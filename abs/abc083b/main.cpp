#include <bits/stdc++.h>
using namespace std;
bool sum(int n, int min, int max)
{
    int count = 0;
    std::string number;
    number = to_string(n);
    //cout << number << endl;
    for (int i = 0; i < number.size(); i++)
    {
        char a = number.at(i);
        count += (int)(a - '0');
    }
    //cout << count << endl;
    if(min <= count && max >= count){
        ///cout << "True" << endl;
        return true;
    }else {
        //kcout << "False" << endl;
        return false;
    }
}
int main()
    {
        int n, a, b, count = 0;
        cin >> n >> a >> b;
        for (int i = 1; i <= n; i++)
        {
            if (sum(i, a, b))
            {
                count += i;
            }
        }
        cout << count << endl;
        return 0;
    }