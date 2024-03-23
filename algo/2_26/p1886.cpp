#include <bits/stdc++.h>
using namespace std;
int a[1000005];
int main(){
    int n, k, tmp;
    cin >> n >> k;
    deque<int> dq;
    for (int i = 1; i <= n; ++i) cin >> a[i];
    for (int i = 1; i < k; ++i){
        while (!dq.empty() && a[dq.back()] > a[i]) dq.pop_back();
        dq.push_back(i);
    }
    for (int i = k; i <= n; ++i){
        while (!dq.empty() && a[dq.back()] > a[i]) dq.pop_back();
        dq.push_back(i);
        while (dq.front() < i - k + 1) dq.pop_front();
        cout << a[dq.front()] << " ";
    }
    cout << endl;
    dq.clear();
    for (int i = 1; i < k; ++i){
        while (!dq.empty() && a[dq.back()] < a[i]) dq.pop_back();
        dq.push_back(i);
    }
    for (int i = k; i <= n; ++i){
        while (!dq.empty() && a[dq.back()] < a[i]) dq.pop_back();
        dq.push_back(i);
        while (dq.front() < i - k + 1) dq.pop_front();
        cout << a[dq.front()] << " ";
    }
    return 0;
}