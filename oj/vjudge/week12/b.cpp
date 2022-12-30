#include <iostream>
using namespace std;
int f[10000];
int find(int x) {
    if (f[x] == x) {
        return x;
    }
    else {
        return f[x] = find(f[x]);
    }
}
void merge(int x, int y) {
    f[find(y)] = find(x);
    return;
}
int main() {
    int n, m,a,b;
    while (~scanf("%d%d", &n, &m)) {
        for (int i = 0;i < m;i++) {
            scanf("%d%d", &a, &b);
            merge(a, b);
        }
    }
    return 0;
}