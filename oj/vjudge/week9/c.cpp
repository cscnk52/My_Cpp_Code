#include <iostream>
#include <cstring>
using namespace std;
const long long mod = 123456789;
const int max_num = 6;
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
} cow_1, basic;
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
void init()
{
    basic.array[0][1] = 1;
    basic.array[1][1] = basic.array[1][2] = basic.array[1][5] = 1;
    basic.array[1][0] = 2;
    basic.array[1][3] = basic.array[1][4] = 3;
    basic.array[2][2] = basic.array[2][5] = 1;
    basic.array[2][3] = basic.array[2][4] = 3;
    basic.array[3][3] = basic.array[3][5] = 1;
    basic.array[3][4] = 2;
    basic.array[4][4] = basic.array[4][5] = 1;
    basic.array[5][5] = 1;

    cow_1.array[0][0] = 1;
    cow_1.array[1][0] = 2;
    cow_1.array[2][0] = 8;
    cow_1.array[3][0] = 4;
    cow_1.array[4][0] = 2;
    cow_1.array[5][0] = 1;
}
int main()
{
    int t;
    long long num;
    scanf("%d", &t);
    init();
    while (t--)
    {
        scanf("%lld", &num);
        if (num == 1 || num == 2)
        {
            printf("1\n");
            continue;
        }
        else
        {
            matrix t = quick_pow(basic, num - 2);
            matrix ans = t * cow_1;
            printf("%lld\n", ans.array[1][0]);
        }
    }
    return 0;
}