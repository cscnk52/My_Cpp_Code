#include <iostream>
using namespace std;
int main()
{
    char c;
    scanf("%c", &c);
    printf("%c,%c,%c\n", c - 1, c, c + 1);
    printf("%d,%d,%d\n", c - 1, c, c + 1);
    return 0;
}