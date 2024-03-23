#include <bits/stdc++.h>
using namespace std;
const int N = 2e6+5;
int a[N];
int main(){
    int n, k;
    cin >> n >> k;
    deque<int> dq;
    for (int i = 1; i <= n; ++i) cin >> a[i];
    for (int i = 1; i < k; ++i){
        while (!dq.empty() && a[dq.back()] < a[i]) dq.pop_back();
        dq.push_back(i);
    }
    for (int i = k; i <= n; ++i){
        while (!dq.empty() && a[dq.back()] < a[i]) dq.pop_back();
        dq.push_back(i);
        if (dq.front() <= i - k) dq.pop_front();
        cout << a[dq.front()] << endl;
    }
    return 0;
}