#include <stdio.h>
#define N 10 //符号常量
int main()
{
    double n = 2, m = 1, Sn = 0, t;
    int i;
    for (i = 1; i <= N; i++)
    {
        Sn = Sn + n / m;
        t = n;     //把分子的值赋给t
        n = m + n; //把m+n的值赋给分母n
        m = t;     //把t的值赋给分子
    }
    printf("求数列2/1，3/2，5/3，8/5，13/8，21/13……\n\n前%d项的和：Sn=%.4f\n", N, Sn);
}