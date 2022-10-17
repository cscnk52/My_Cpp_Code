#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <numeric>
using namespace std;
void insert(int x1, int x2, int y1, int y2, int p)
{
    diff[x1][y1] += p;
    diff[x2 + 1][y1] -= p;
    diff[x1][y2 + 1] -= p;
    diff[x2 + 1][y2 + 1] += p;
}

int num[1000][1000];
int rect[4][1000];
int sum[1000][1000];
int diff[1000][1000];

int main()
{
    int n, m, q, x1, x2, y1, y2, p;

    memset(num, 0, sizeof(num));
    memset(rect, 0, sizeof(rect));
    memset(sum, 0, sizeof(sum));
    memset(diff, 0, sizeof(diff));

    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            scanf("%d", &num[i][j]);

    scanf("%d", &q);
    for (int i = 1; i <= q; i++)
    {
        scanf("%d%d%d%d")
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            sum[i][j] = sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1] + num[i][j];
        }
    }
    return 0;
}