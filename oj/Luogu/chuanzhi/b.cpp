#include <iostream>
#include <cstring>
using namespace std;
const int max_num = 200010;
long long a[max_num], b[max_num], ans[max_num];
int main() {
    int n, m, z;
    memset(ans, 0, sizeof(ans));
    memset(a, 0, sizeof(a));
    memset(b, 0, sizeof(b));
    scanf("%d%d", &n, &m);
    for (int i = n - 1;i >= 0;i--) {
        scanf("%lld", &a[i]);
    }
    for (int i = m - 1;i >= 0;i--) {
        scanf("%lld", &b[i]);
    }
    z = max(n, m);
    for (int i = 0;i < z;i++) {
        ans[i] = a[i] + b[i] + ans[i];
        ans[i + 1] = ans[i] / (i + 2);
        ans[i] = ans[i] % (i + 2);
    }
    if (ans[z] != 0) {
        printf("%lld ", ans[z]);
    }
    for (int i = z - 1;i >= 0;i--) {
        printf("%lld%c", ans[i], i == 0 ? '\n' : ' ');
    }
    return 0;
}