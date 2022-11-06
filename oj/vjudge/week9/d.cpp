#include <iostream>
#include <cstring>
using namespace std;
const long long mod = 1000000007;
const int max_num = 110;
struct matrix
{
    long long array[max_num][max_num];
    matrix operator*(matrix temp)
    {
        matrix ans;
        for (int i = 0; i < max_num; i++)
            for (int j = 0; j < max_num; j++)
            {
                ans.array[i][j] = 0;
                for (int k = 0; k < max_num; k++)
                    ans.array[i][j] = (ans.array[i][j] + (array[i][k] * temp.array[k][j] % mod)) % mod;
            }
        return ans;
    }
};
matrix quick_pow(matrix a, long long b)
{
    matrix temp;
    memset(temp.array, 0, sizeof(temp.array));
    for (int i = 0; i < max_num; i++)
        temp.array[i][i] = 1;
    while (b)
    {
        if (b & 1)
            temp = temp * a;
        a = a * a;
        b >>= 1;
    }
    return temp;
}
int main()
{
    long long n, m;
    scanf("%lld%lld", &n, &m);
    if (n < m)
        printf("1\n");
    else
    {
        matrix fi, base;
        fi.array[0][0] = 1;
        fi.array[0][m - 1] = 1;
        for (int i = 1; i < m; i++)
            fi.array[i][i - 1] = 1;
        for (int i = 0; i < m; i++)
            base.array[i][0] = 1;
        matrix ans = quick_pow(fi, n - m + 1);
        ans = ans * base;
        printf("%lld\n", ans.array[0][0]);
    }
    return 0;
}