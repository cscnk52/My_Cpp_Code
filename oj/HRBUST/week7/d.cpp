#include <iostream>
using namespace std;
long long gcd(long long a, long long b)
{
    if (b > a)
        return gcd(b, a);
    if (b == 0)
        return a;
    return gcd(a, a % b);
}
int main()
{
    long long a, b;
    while (~scanf("%lld%lld", &a, &b))
    {
        printf("%lld %lld\n", gcd(a, b), a * b / gcd(a, b));
    }
    return 0;
}