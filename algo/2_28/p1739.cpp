#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int x = 0;
    cin >> s;
    for (auto c : s){
        if (c == '(') x++;
        else if (c == ')'){
            if (x <= 0){
                cout << "NO";
                return 0;
            }
            x--;
        }
    }
    if (x == 0) cout << "YES";
    else cout << "NO";
    return 0;
}