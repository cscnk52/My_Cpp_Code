#include <iostream>
#include <cmath>
using namespace std;
const int N = 100010;
long long ans[N];
int main() {
    int t, l, r;
    long long ans;
    scanf("%d", &t);
    while (t--) {
        ans = 0;
        scanf("%d%d", &l, &r);
        for (int i = l;i <= r;i++) {
            long long temp=0;
            for (int j = l;j <= i;j++) {
                if (i % j == 0)
                    temp++;
            }
            ans += temp * (temp + 1) / 2;
        }
        printf("%lld\n", ans);
    }
    return 0;
}