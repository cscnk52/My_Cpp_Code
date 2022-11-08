#include <iostream>
#include <vector>
using namespace std;
int n;
vector<int> num;
int solve()
{
    bool status = 0;
    for (int i = n; i > 1; i >>= 1)
    {
        for (int j = 1; j < n; j += i)
        {
            status = 1;
            for (int k = j - 1; k < j + i - 2; k++)
                status &= (num[k] <= num[k + 1]);
            if (status)
                return i;
        }
    }
    return 1;
}
int main()
{
    int temp;
    scanf("%d", &n);
    while (~scanf("%d", &temp))
        num.push_back(temp);
    printf("%d\n", solve());
    return 0;
}