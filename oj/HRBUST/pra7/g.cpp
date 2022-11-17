#include <iostream>
using namespace std;
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int x, y,temp;
        scanf("%d%d", &x, &y);
        int ans[x][y];
        for (int i = 0;i < x;i++) {
            for (int j = 0;j < y;j++) {
                scanf("%d", &ans[i][j]);
            }
        }
        for (int i = 0;i < x;i++) {
            for (int j = 0;j < y;j++) {
                scanf("%d", &temp);
                ans[i][j]+= temp;
            }
        }
        for (int i = 0;i < x;i++) {
            for (int j = 0;j < y;j++) {
                printf("%5d", ans[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}