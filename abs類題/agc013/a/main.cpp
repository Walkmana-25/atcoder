#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int flag = 2;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (flag == 0)
        {
            if(v[i - 1] < v[i]){
                flag = 1;
            }else if(v[i - 1] > v[i]){
                flag = -1;
            }else {
                flag = 0;
            }
        }
        else if (flag == 1)
        {
            if (v[i - 1] <= v[i])
            {
                continue;
            }
            else
            {
                flag = 0;
                ans++;
                
            }
        }
        else if (flag == -1)
        {
            if (v[i - 1] >= v[i])
                {
                    continue;
                }
            else
            {
                flag = 0;
                ans++;
                
            }
        }
        else if(flag == 2){
            flag = 0;
            ans++;
        }

    }
    cout << ans << endl;

}
