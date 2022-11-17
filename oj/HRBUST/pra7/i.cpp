#include <iostream>
using namespace std;
int book[10], a[10];
void dfs(int temp) {
    if (temp == 10) {
        if (a[1] * 100 + a[2] * 10 + a[3] + a[4] * 100 + a[5] * 10 + a[6] == a[7] * 100 + a[8] * 10 + a[9]) {
            if (a[1] * 100 + a[2] * 10 <= a[4] * 100 + a[5] * 10 + a[6]) {
                printf("%d%d%d+%d%d%d=%d%d%d\n", a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9]);
            }
        }
    }
    for (int i = 1;i < 10;i++) {
        if (book[i] == 0) {
            a[temp] = i;
            book[i] = 1;
            dfs(temp + 1);
            book[i] = 0;
        }
    }
}

int main() {
    dfs(1);
    return 0;
}