#include <iostream>
using namespace std;
const int mod = 100000000;
const int max_num = 100;
struct matrix {
    long long array[max_num][max_num];
    matrix operator*(matrix temp) {
        matrix ans;
        for (int i = 0; i < max_num; i++)
            for (int j = 0; j < max_num; j++) {
                ans.array[i][j] = 0;
                for (int k = 0; k < max_num; k++)
                    ans.array[i][j] = (ans.array[i][j] + (array[i][k] * temp.array[k][j] % mod)) % mod;
            }
        return ans;
    }
} a, b, ans;
int main() {
    int x, y, z, w;
    while (~scanf("%d%d", &x, &y)) {
        for (int i = 0;i < x;i++) {
            for (int j = 0;j < y;j++) {
                scanf("%lld", &(a.array[i][j]));
            }
        }
        scanf("%d%d", &z, &w);
        for (int i = 0;i < z;i++) {
            for (int j = 0;j < w;j++) {
                scanf("%lld", &(b.array[i][j]));
            }
        }
        ans = a * b;
        for (int i = 0;i < x;i++) {
            for (int j = 0;j < w;j++) {
                printf("%6lld", ans.array[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}