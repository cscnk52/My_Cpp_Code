#include <iostream>
using namespace std;
bool is_prime(long long num)
{
    if(num<=2)
        return false;
    for (long long i = 2; i * i <= num; i++)
        if (num % i == 0)
            return false;
    return true;
}
int main()
{
    int t;
    long long num;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%lld", &num);
        printf("%s\n", is_prime(num) ? "YES" : "NO");
    }
    return 0;
}