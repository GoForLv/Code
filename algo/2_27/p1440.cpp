#include <bits/stdc++.h>
using namespace std;
#define N 2000005
int a[N];
int main(){
    int n, m, x;
    deque<int> dq;
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; ++i) scanf("%d", a + i);
    dq.push_back(1);
    printf("0\n");
    for (int i = 2; i <= n; ++i){
        if (dq.front() < i - m) dq.pop_front();
        printf("%d\n", a[dq.front()]);
        while (!dq.empty() && a[dq.back()] > a[i]) dq.pop_back();
        dq.push_back(i);
    }
    return 0;
}