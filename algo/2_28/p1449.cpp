#include <bits/stdc++.h>
using namespace std;

int main(){
    char c;
    c = getchar();
    int num = 0, a, b;
    stack<int> st;
    while (c != '@'){
        if ('0' <= c && c <= '9'){
            num *= 10;
            num += (c - '0');
        } else if (c == '.'){
            st.push(num);
            num = 0;
        } else {
            b = st.top();
            st.pop();
            a = st.top();
            st.pop();
            switch (c){
                case '+':
                    a += b;
                    break;
                case '-':
                    a -= b;
                    break;
                case '*':
                    a *= b;
                    break;
                case '/':
                    a /= b;
                    break;
            }
            st.push(a);
        }
        c = getchar();
    }
    cout << st.top();
    return 0;
}