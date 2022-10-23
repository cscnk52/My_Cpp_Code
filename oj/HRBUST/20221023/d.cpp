#include <iostream>
using namespace std;
long long fib[91] = {0, 1, 1};
int main()
{
    int num;
    for (int i = 3; i <= 90;i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
        while (~scanf("%d", &num))
        {
            printf("%lld\n", fib[num]);
        }
    return 0;
}