#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &n);
        sum += n;
    }
    printf("Sum=%d\n", sum);
    return 0;
}