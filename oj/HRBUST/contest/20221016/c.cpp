#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <numeric>
using namespace std;

int num[1000][1000];
int rect[4][1000];
int sum[1000][1000];
int diff[1000][1000];

void insert(int x1, int y1, int x2, int y2, int p)
{
    diff[x1][y1] += p;
    diff[x2 + 1][y1] -= p;
    diff[x1][y2 + 1] -= p;
    diff[x2 + 1][y2 + 1] += p;
}

int main()
{
    int n, m, q, p;

    memset(num, 0, sizeof(num));
    memset(rect, 0, sizeof(rect));
    memset(sum, 0, sizeof(sum));
    memset(diff, 0, sizeof(diff));

    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            scanf("%d", &sum[i][j]);

    scanf("%d", &q);
    for (int i = 1; i <= q; i++)
    {
        scanf("%d%d%d%d%d", &rect[0][i], &rect[1][i], &rect[2][i], &rect[3][i], &p);
        insert(rect[0][i], rect[1][i], rect[2][i], rect[3][i], p);
    }

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            diff[i][j] = diff[i][j] + diff[i][j - 1] + diff[i - 1][j] - diff[i - 1][j - 1];

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            sum[i][j] += sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1] + diff[i][j];

    int maxx = 0;
    for (int i = 1; i <= q; i++)
        maxx = max(maxx, sum[rect[2][i]][rect[3][i]] + sum[rect[0][i] - 1][rect[1][i] - 1] - sum[rect[0][i] - 1][rect[3][i]] - sum[rect[2][i]][rect[1][i] - 1]);

    printf("%d\n", maxx);

    return 0;
}