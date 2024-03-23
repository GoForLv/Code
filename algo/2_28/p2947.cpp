#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int a[N], ans[N];
int main(){
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) cin >> a[i];
    a[0] = 1e6 + 5;
    stack<int> st;
    st.push(0);
    for (int i = n; i >= 1; --i){
        while (a[st.top()] <= a[i]) st.pop();
        ans[i] = st.top();
        st.push(i);
    }
    for (int i = 1; i <= n; ++i) cout << ans[i] << "\n";
    return 0;
}