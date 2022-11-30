#include <iostream>
#include <cstring>
using namespace std;
int n, x, y;
int main() {
    while (~scanf("%d", &n)) {
        int point[n][n];
        memset(point, 0, sizeof(point));
        point[0][n >> 1] = 1;
        x = 0, y = n >> 1;
        for (int i = 2;i <= n * n;i++) {
            if ((i - 1) % n == 0) {
                x += 1;
                y = y;
            }
            else {
                while (point[x][y] != 0) {
                    x = (x - 1 + n) % n;
                    y = (y + 1) % n;
                }
            }
            point[x][y] = i;
        }
        for (auto& row : point) {
            for (auto it : row) {
                printf("%6d", it);
            }
            printf("\n");
        }
    }
    return 0;
}