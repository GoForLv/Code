#include <bits/stdc++.h>
using namespace std;
const int N = 3e6 + 5;
int a[N], f[N];
int main(){
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) cin >> a[i];
    a[0] = 1e9 + 5;
    stack<int> st;
    st.push(0);
    for (int i = n; i >= 1; --i){
        while (a[i] >= a[st.top()]) st.pop();
        f[i] = st.top();
        st.push(i);
    }
    for (int i = 1; i <= n; ++i) cout << f[i] << " ";
    return 0;
}