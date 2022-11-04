#include <iostream>
using namespace std;
long long fib(int n, int ret = 0, int tmp = 1)
{
    if (n == 0) return ret;
    else return fib(n - 1, ret + tmp, ret);
}
int main()
{
    int num;
    while (~scanf("%d", &num))
    {
        printf("%lld\n", fib(num));
    }
    return 0;
}