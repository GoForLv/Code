#include <bits/stdc++.h>
using namespace std;
const int N = 2e6 + 5;
int s[N];

int main(){
    int n;
    cin >> n;
    int res = 0;
    for (int i = 1; i <= n; ++i){
        cin >> s[i];
        s[i + n] = s[i];
    }
    for (int i = 1; i <= (n << 1); ++i) s[i] += s[i-1];
    deque<int> dq;
    for (int i = 1; i < n; ++i){
        while (!dq.empty() && s[dq.back()] > s[i]) dq.pop_back();
        dq.push_back(i);
    }
    for (int i = n; i < (n << 1); ++i){
        while (!dq.empty() && s[dq.back()] > s[i]) dq.pop_back();
        dq.push_back(i);
        if (dq.front() <= i - n) dq.pop_front();
        if (s[dq.front()] >= s[i - n]) res++;
    }
    cout << res;
    return 0;
}