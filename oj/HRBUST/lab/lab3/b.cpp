#include <math.h>
#include <stdio.h>

int main()
{
    int y, m, d, i, s, n;
    int month[2][13] = {
        {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
        {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};

    scanf("%d%d%d", &y, &m, &d);
    n = (y % 4 == 0 && y % 100 != 0) || y % 400 == 0;
    for (s = 0, i = 1; i < m; i++)
        s += month[n][i];
    s += d;
    printf("%d\n", s);
    return 0;
}
