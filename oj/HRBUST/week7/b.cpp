#include <iostream>
#include <vector>
using namespace std;
const long long N = 10000000;
vector<bool> is_prime(N + 1, true);
vector<long long> prime;
void pre()
{
    is_prime[1] = false;
    for (long long i = 2; i <= N; i++)
    {
        if (is_prime[i])
            prime.push_back(i);
        for (long long j = 0; j < (long long)prime.size() && i * prime[j] <= N; j++)
        {
            is_prime[i * prime[j]] = false;
            if (i % prime[j] == 0)
                break;
        }
    }
}
int main()
{
    pre();
    long long t;
    long long num;
    scanf("%lld", &t);
    while (t--)
    {
        scanf("%lld", &num);
        printf("%s\n", is_prime[num] ? "YES" : "NO");
    }
    return 0;
}