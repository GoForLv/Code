#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    char c;
    scanf("%d", &n);
    c = getchar();
    stack<char> st;
    while (c != EOF){    
        c = getchar();
        if (c == ' ' || c == '\n'){
            while (!st.empty()){
                cout << st.top();
                st.pop();
            }
            cout << c;
        } else {
            st.push(c);
        }
    }
    return 0;
}