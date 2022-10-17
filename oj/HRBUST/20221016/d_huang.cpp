#include <bits/stdc++.h>
using namespace std;
int n, m, num, p;
int x1[1010], x2[1010], y11[1010], y2[1010];
int sum[1010][1010];
int d[1010][1010];
void cf(int x1, int y1, int x2, int y2)
{
    d[x1][y1] += p;
    d[x1][y2 + 1] -= p;
    d[x2 + 1][y1] -= p;
    d[x2 + 1][y2 + 1] += p;
}
int main()
{
    scanf("%d%d", &n, &m);

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            scanf("%d", &sum[i][j]);

    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        scanf("%d%d%d%d%d", &x1[i], &y11[i], &x2[i], &y2[i], &p);
        cf(x1[i], y11[i], x2[i], y2[i]);
    }

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            d[i][j] = d[i][j] + d[i][j - 1] + d[i - 1][j] - d[i - 1][j - 1];

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            sum[i][j] = sum[i][j] + d[i][j] + sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1];

    int maxx = 0;
    
    for (int i = 1; i <= num; i++)
        maxx = max(maxx, sum[x2[i]][y2[i]] + sum[x1[i] - 1][y11[i] - 1] - sum[x1[i] - 1][y2[i]] - sum[x2[i]][y11[i] - 1]);

    printf("%d\n", maxx);
    return 0;
}
