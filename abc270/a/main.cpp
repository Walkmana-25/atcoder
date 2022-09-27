#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a;
    cin >> t >> a;
    vector<bool> tt(3, false), aa(3, false);

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                if ((i * 1 + j * 2 + k * 4) == t)
                {
                    if (i == 1)
                    {
                        tt[0] = true;
                    }
                    if (j == 1)
                    {
                        tt[1] = true;
                    }
                    if (k == 1)
                    {
                        tt[2] = true;
                    }
                    goto a;
                }
            }
        }
    }
        a:
            for (int i = 0; i < 2; i++)
            {
                for (int j = 0; j < 2; j++)
                {
                    for (int k = 0; k < 2; k++)
                    {
                        if ((i * 1 + j * 2 + k * 4) == a)
                        {
                            if (i == 1)
                            {
                                aa[0] = true;
                            }
                            if (j == 1)
                            {
                                aa[1] = true;
                            }
                            if (k == 1)
                            {
                                aa[2] = true;
                            }
                            goto b;
                        }
                    }
                }
            }
        b:

            int count = 0;
            for (int i = 0; i < 3; i++)
            {
                if (aa[i] || tt[i])
                {
                    if (i == 0)
                    {
                        count++;
                    }
                    else if (i == 1)
                    {
                        count += 2;
                    }
                    else
                    {
                        count += 4;
                    }
                }
            }
            cout << count << endl;
        
    }
    
