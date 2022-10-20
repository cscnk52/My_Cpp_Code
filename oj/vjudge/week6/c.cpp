#include <iostream>
#include <cmath>
using namespace std;
const int N = 100005, M = 25;
int n, m, t, l, r, a[N], f[N][M], g[N][M];
void pre()
{
    t = log2(n);
    for (int i = 1; i <= n; i++)
        f[i][0] = g[i][0] = a[i];
    for (int j = 1; j <= t; j++)
        for (int i = 1; i <= n - (1 << j) + 1; i++)
        {
            f[i][j] = max(f[i][j - 1], f[i + (1 << (j - 1))][j - 1]);
            g[i][j] = min(g[i][j - 1], g[i + (1 << (j - 1))][j - 1]);
        }
}
int get_max(int l, int r)
{
    int k = log2(r - l + 1);
    return max(f[l][k], f[r - (1 << k) + 1][k]);
}
int get_min(int l, int r)
{
    int k = log2(r - l + 1);
    return min(g[l][k], g[r - (1 << k) + 1][k]);
}
int main()
{
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n;i++)
        scanf("%d", a + i);
    pre();
    while(m--)
    {
        scanf("%d%d", &l, &r);
        printf("%d\n", get_max(l, r) - get_min(l, r));
    }
    return 0;
}