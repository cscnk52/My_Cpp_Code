#include<iostream>
using namespace std;
const int M = 1e5 + 5;
int n, m;
int s[M];
int a = 0, b = 0;
int check(int x) {
    int ans = 0, now = 0;
    for (int i = 1;i <= n;i++) {
        if (now + s[i] > x) {
            ans++;
            now = s[i];
        }
        else
            now += s[i];
    }
    return ans < m;
}
int solve(int l, int r) {
    while (l < r) {
        int mid = (l + r) >> 1;
        if (check(mid)) {
            r = mid;
        }
        else {
            l = mid + 1;
        }
    }
    return l;
}
int main() {
    scanf("%d%d", &n, &m);
    for (int i = 1;i <= n;i++) {
        scanf("%d", &s[i]);
        b += s[i];
        a = min(a, s[i]);
    }
    printf("%d", solve(a, b));
    return 0;
}