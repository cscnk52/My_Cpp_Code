#include <iostream>
using namespace std;
int main()
{
    int n;
    while (~scanf("%d", &n))
    {
        if (n == 12 || n <= 2)
            printf("Winter season\n");
        else if (n >= 3 && n <= 5)
            printf("Spring season\n");
        else if (n >= 6 && n <= 8)
            printf("Summer season\n");
        else
            printf("Autumn season\n");
    }
    return 0;
}