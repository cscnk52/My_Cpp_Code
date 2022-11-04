#include <iostream>
using namespace std;
int main()
{
    int num;
    while (~scanf("%d", &num))
    {
        if (num < 0)
        {
            printf("%d\n", num);
            break;
        }
    }
    return 0;
}