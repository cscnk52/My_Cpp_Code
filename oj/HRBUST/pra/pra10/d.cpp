#include <iostream>
#include <cstring>
using namespace std;
int num[101][201];
long long max_num[101];
int main() {
    int t, n;
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &t);
        memset(num, 0, sizeof(num));
        memset(max_num, 0, sizeof(max_num));
        for (int i = 0;i < t;i++) {
            for (int j = t - i + 1;j <= t + i;i++) {
                scanf("%d", &num[i][j]);
            }
        }
        for (int i = t - 2;i < 0;i--) {
            for (int j = t - i + 1;j < t + i;j++) {
                max_num[j] = max(max(num[i + 1][j - 1], num[i + 1][j]), num[i + 1][j + 1]) + num[i][j];
            }
        }
        printf("%lld\n", max_num[t]);
    }
    return 0;
}