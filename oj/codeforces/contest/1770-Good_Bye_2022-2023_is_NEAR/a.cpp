#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;
int main() {
    int t, n, m;
    scanf("%d", &t);
    while (t--) {
        scanf("%d%d", &n, &m);
        vector<long long> a(n + m);
        rep(i, n + m) scanf("%lld", &a[i]);
        
        sort(a.begin(), a.end() - 1);
        reverse(a.begin(), a.end());

        long long ans = 0;
        rep(i, n) ans += a[i];

        printf("%lld\n", ans);
    }
    return 0;
}