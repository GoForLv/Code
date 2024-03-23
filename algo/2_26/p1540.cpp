// p1540.cpp
#include <bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q;
    unordered_set<int> mem;
    int n, m, x, res = 0;
    cin >> m >> n;
    while (n--){
        cin >> x;
        if (mem.count(x))
            continue;
        if (q.size() == m){
            mem.erase(q.front());
            q.pop();
        }
        q.push(x);
        mem.insert(x);
        res++;
    }
    cout << res;
    return 0;
}