#include <iostream>
using namespace std;
int main()
{
    int t;
    long long num, temp, count = 0;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%lld", &num);
        for (long long i = 2; i <= num / i; i++)
        {
            if (num % i == 0)
            {
                count = 0;
                while (num % i == 0)
                {
                    num /= i;
                    count++;
                    temp = i;
                }
                printf("%lld %lld\n", temp, count);
                count = 0;
            }
        }
        if (num > 1)
            printf("%lld 1\n", num);
    }
    return 0;
}