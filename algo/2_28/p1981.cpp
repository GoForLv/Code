#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    stack<int> num;
    stack<char> op;
    int x = 0, a, b;
    for (auto c : s){
        if ('0' <= c && c <= '9'){
            x *= 10;
            x += (c - '0');
        } else {
            num.push(x);
            x = 0;
            if (c == '*') op.push('*');
            else{
                while (!op.empty() && op.top() == '*'){
                    a = num.top();
                    num.pop();
                    b = num.top();
                    num.pop();
                    a *= b;
                    num.push(a);
                    op.pop();
                }
                op.push('+');
            }
        }
    }
    num.push(x);
    while (!op.empty()){
        a = num.top();
        num.pop();
        b = num.top();
        num.pop();
        a += b;
        num.push(a);
        op.pop();
    }
    cout << a % 10000;
    return 0;
}