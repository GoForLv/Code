#include <bits/stdc++.h>
using namespace std;
int n;
//dynamic programing
// void work(){
//     for (int i = 1; i <= n; ++i)
//         cin >> a[i];
//     int sum = a[1], r = 1, l = 1, p = 1;
//     for (int i = 2; i <= n; ++i){
//         if (a[i-1] >= 0){
//             a[i] = a[i-1] + a[i];
//         }
//         else{
//             p = i;
//         }
//         if (a[i] > sum){
//             sum = a[i];
//             r = i;
//             l = p;
//         }
//     }
//     cout << sum << " " << l << " " << r << "\n";
// }
//greedy
void work(){
    int a;
    cin >> a;
    int cur = a, sum = a, l = 1, r = 1, p = 1;
    for (int i = 2; i <= n; ++i){
        cin >> a;
        if (cur < 0){
            cur = 0;
            p = i;
        }
        cur += a; 
        if (cur > sum){
            sum = cur;
            l = p;
            r = i;
        }
    }
    cout << sum << " " << l << " " << r << "\n";
}
int main(){
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i){
        cin >> n;
        cout << "Case " << i << ":\n";
        work();
        if (i != t) cout << "\n";
    }
    return 0;
}