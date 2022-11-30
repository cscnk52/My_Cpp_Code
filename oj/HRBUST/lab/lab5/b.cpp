#include <stdio.h>
#define N 10
int main()
{
    float ave, b[N], sum = 0, *p = &ave, *q = b;
    printf("\n Please input a %d elements sequence of number:\n", N);
    for (; q < b + N;)
    {
        scanf("%f", q);
        sum += *q;
        q++;
    }
    ave = sum / N;
    p = &ave;
    printf("\n Over the average value %f:\n", *p);
    for (q=b; q < b + N;) {
        if (*q >= *p)
            printf("%f\t", *q);
        q++;
    }
    printf("\n Under the average value %f:\n", *p);
    for (q=b; q < b + N;) {
        if (*q < *p)
            printf("%f\t", *q);
        q++;
    }
    return 0;
}