#include <bits/stdc++.h>
using namespace std;
queue<int> que[305];
queue<int> q;
int a[100005];
int main(){
    int n, m, t, x, f;
    string op;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) cin >> a[i];
    cin >> t;
    while (t--){
        cin >> op;
        if (op == "push"){
            cin >> x;
            f = a[x];
            if (que[f].empty()) q.push(f);
            que[f].push(x);
        } else {
            f = q.front();
            cout << que[f].front() << endl;
            que[f].pop();
            if (que[f].empty()) q.pop();
        }
    }
    return 0;
}