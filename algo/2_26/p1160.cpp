#include <bits/stdc++.h>
using namespace std;
struct node{
    int pre, nxt;
    bool del;
}a[100005];
int main(){
    int n, x, op, m;
    cin >> n;
    for (int i = 0; i <= n; ++i){
        a[i].del = false;
    }
    a[0].nxt = 1;
    a[1].pre = 0;
    a[1].nxt = 0;
    for (int i = 2; i <= n; ++i){
        cin >> x >> op;
        if (op == 0){
            a[i].pre = a[x].pre;
            a[i].nxt = x;
            a[a[i].pre].nxt = i;
            a[a[i].nxt].pre = i;
        } else if (op == 1){
            a[i].pre = x;
            a[i].nxt = a[x].nxt;
            a[a[i].pre].nxt = i;
            a[a[i].nxt].pre = i;
        }
    }
    cin >> m;
    while (m--){
        cin >> x;
        if (a[x].del) continue;
        a[a[x].pre].nxt = a[x].nxt;
        a[a[x].nxt].pre = a[x].pre;
        a[x].del = true; 
    }
    int p = a[0].nxt;
    while (p != 0){
        cout << p << " ";
        p = a[p].nxt;
    }
}