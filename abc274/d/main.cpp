#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int n,x,y,sum = 0, even = 0, odd = 0;
    cin >> n >> x >> y;
    bool ans = true;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        v[i] = input;
        sum += input;
        if(i % 2  ){
            odd += input;
        }
        else{even += input;}
    }
    even -= v[0];
    sum -= v[0];

    int distance = abs(x - v[0]) + abs(y);

    if(distance > sum){ans = false;}
    if(distance < sum){
        if((sum - distance) % 2 != 0){
            ans = false;
        }
    }
    int distance_x =  abs(x - v[0]);
    int distance_y = abs(y);
    if(even < distance_x || odd < distance_y){ans =false;}
    if(v[0] == x){
        if(n  == 3){{
            ans = false;
        }}
    }
    if(even > distance_x){
        if((even - distance_x) % 2 != 0){ans = false;
    }}
    if(odd >  distance_y){
        if((odd - distance_y) % 2 != 0){ans = false;}
    }


    
if(ans){cout << "Yes" << endl;}else{cout << "No" << endl;}
}