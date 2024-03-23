#include <bits/stdc++.h>
using namespace std;

int key(char ch){
    switch (ch){
        case '(':
            return 0;
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        case '^':
            return 3;
    }
    return 0;
}
int main(){
    stack<char> st;
    stack<char> op;
    string s;
    cin >> s;
    for (auto c : s){
        if ('0' <= c && c <= '9') st.push(c);
        else if (c == '(') op.push('(');
        else if (c == ')'){
            while (op.top() != '('){
                st.push(op.top());
                op.pop();
            }
            op.pop();
        } else {
            while (!op.empty() && key(c) <= key(op.top())){
                if (key(c) == key(op.top()) && key(c) == 3) break;
                st.push(op.top());
                op.pop();
            }
            op.push(c);
        }
    }
    while (!op.empty()){
        st.push(op.top());
        op.pop();
    }
    while (!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}