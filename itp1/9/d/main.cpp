#include <bits/stdc++.h>
using namespace std;
void replace(string &s,int a,int b,string &c){
    s.replace(a,b,c);
    //cout << s << endl;
}
void reverse_s(string &s, int a, int b){
    auto begin = s.begin();
    auto end = s.begin();
    //for (int i = 0; i < a; i++)
    //{
    //    ++begin;
    //}
    //for (int i = 0; i < b; i++){
    //    --end;
    //}
    begin += a;
    end += b + 1;
    reverse(begin,end);
    //cout << s << endl;
}
void print(string &s,int a,int b){
    for (int i = 0; i < s.size(); i++)
    {
        if (a <= i && i <= b){
            cout << s[i];
        }
    }
    cout << endl;
    
} 

int main(){
    string s,a,d;
    int b = 0,c = 0, l = 0;
    cin >> s >> l;
    for(int i = 0; i < l; i++){
        cin >> a;
        if(a == "replace"){cin >> b >> c >> d;replace(s,b,c,d);}
        if(a == "reverse"){cin >> b >> c;reverse_s(s,b,c);}
        if(a == "print"){cin >> b >> c;print(s,b,c);}
    }
    
}
