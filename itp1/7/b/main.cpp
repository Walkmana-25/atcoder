#include  <bits/stdc++.h>

using namespace std;
int find(int n, int x){
    int count = 0,sum = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            for (int k = j + 1; k <= n; k++)
            {
                sum = i + j + k;
                if (sum == x)
                {
                    count++;
                }
                
            }
            
        }
        
    }
    return count;
    
}

int main()
{
    vector<int> ans;
    int x,n,y;
    do{
        cin >> x >> n;
        y = find(x,n);
        ans.push_back(y);
        y = 0;
    }while(
        !(x == 0 && n == 0)
    );
    for(int i = 0; i < ans.size() - 1 ; i++){
        int out = ans[i];
        cout << out << endl;
    }

}