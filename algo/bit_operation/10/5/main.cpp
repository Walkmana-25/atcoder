#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void push(vector<vector<int>> &v, int &x, int &y, int &h, int & w){
    vector<int> tmp = {0, x, y - 1, x-1, y, x, y, x + 1, y, x, y + 1};
    for (int i = 1; i <= 5; i++)
    {
        /* code */
        int xx = tmp.at(2 * i - 1);
        int yy = tmp.at(2 * i);
        if(xx < 0 || yy < 0 || xx >= w || yy >= h){
            continue;
        }
        
        v.at(yy).at(xx) = 1 - v.at(yy).at(xx);
    }
    
}
bool test(vector<vector<int>> &v, int &h, int &w){
    bool test = true;
    for (int i = 0; i < h; i++)
    {
        /* code */
        for (int j = 0; j < w; j++)
        {
            /* code */
            if(v.at(i).at(j)){
                test = false;
            }
        }
        
    }
    return test;
    

}
int main(){
    int h , w;
    cin >> h >> w;

    vector<vector<int>> v(h, vector<int>(w));


    for (int i = 0; i < h; i++)
    {
        string s;
        cin >> s;
        /* code */
        for (int j = 0; j < w; j++)
        {
            /* code */
            if(s.at(j) == '#'){
                v.at(i).at(j) = 1;
            }
            else v.at(i).at(j) = 0;
        }
        
    }


    for (int i = 0; i < (1 << (h * w)); i++)
    {
        auto v2 = v;
        /* code */
        for(int j = 0; j < w; j++){
            for (int k = 0; k < h; k++)
            {
                /* code */
                if(i & (1 <<(h * j + k))){
                    push(v2, k, j, h, w);
                }
            }
            
        }
        if(test(v2, h , w )){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    
    
    
}
