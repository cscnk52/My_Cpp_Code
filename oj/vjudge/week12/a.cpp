#include <iostream>
using namespace std;
int f[1000];
int n, m, q, c, d, a, b;
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
    scanf("%d%d%d", &n, &m, &q);
    for (int i = 1;i <= n;i++) {
        f[i] = i;
    }
    for (int i = 1;i <= m;i++) {
        scanf("%d%d", &c, &d);
        merge(c, d);
    }
    for (int i = 1;i <= q;i++) {
        scanf("%d%d", &a, &b);
        if (find(a) == find(b)) {
            printf("Yes\n");
        }
        else {
            printf("No\n");
        }
    }
    return 0;
}