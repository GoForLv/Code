#include <bits/stdc++.h>
using namespace std;
struct node
{
    int group;
    node* nxt;
    node(int _id): group(_id), nxt(nullptr){}
};

int main(){
    int n, m;
    cin >> n >> m;
    node* head = new node(0);
    node* cur = head, *tmp;
    for (int i = 1; i <= n; ++i){
        tmp = new node(i);
        cur->nxt = tmp;
        cur = tmp;
    }
    cur->nxt = head->nxt;
    cur = head;
    while (n--){
        for (int i = 1; i < m; ++i) cur = cur->nxt;
        tmp = cur->nxt;
        cout << tmp->group << " ";
        cur->nxt = tmp->nxt;
    }
    return 0;
}

// 静态链表
// #include <bits/stdc++.h>
// using namespace std;
// struct node{
//     int id;
//     int nxt;
// }nodes[105];
// int main(){
//     int n, m;
//     cin >> n >> m;
//     for(int i = 0; i < n; ++i) {
//         nodes[i].id = i;
//         nodes[i].nxt = i + 1;
//     }
//     nodes[n].id = n;
//     nodes[n].nxt = 1;
//     int p = 0, cur = 0;
//     while(n--) {
//         for (int i = 1; i < m; ++i) p = nodes[p].nxt;
//         cur = nodes[p].nxt;
//         cout << cur << " ";
//         nodes[p].nxt = nodes[cur].nxt;
//     }
//     return 0;
// }